using UnityEngine;

public class PuzzlePieceScript : MonoBehaviour
{
    [HideInInspector]
    public SinglePuzzleScript[] puzzles;
    [HideInInspector]
    public int renderOrder;

    private void Start()
    {
        ReorganizeChildrens();
        PuzzleRenderOrderScript.instance.AddPiece(this);
    }

    public void OnDragOver()
    {
        foreach(SinglePuzzleScript puzzle in puzzles)
        {
            foreach (PuzzleConnectionScript conn in puzzle.puzzleConnections)
            {
                if (conn != null && !conn.isConnected && conn.canConnect)
                {
                    ConnectPiece(conn);
                    break;
                }
            }
        }
        PuzzleRenderOrderScript.instance.StopDrag(this);
    }

    private void ReorganizeChildrens()
    {
        puzzles = new SinglePuzzleScript[transform.childCount];
        for(int i = 0; i < transform.childCount; i++)
        {
            puzzles[i] = transform.GetChild(i).GetComponent<SinglePuzzleScript>();
            puzzles[i].currPiece = this;
        }
    }

    private void ConnectPiece(PuzzleConnectionScript conn)
    {
        PuzzlePieceScript conPiece = conn.pointToConnet.myPuzzle.currPiece;

        Transform connPieceTransform = conPiece.transform;
        SinglePuzzleScript conPuzzle = conn.myPuzzle;
        connPieceTransform.position += conPuzzle.transform.position - conn.pointToConnet.myPuzzle.transform.position + conPuzzle.offsets[conn.connIndex];

        SinglePuzzleScript[] connectedPuzzles = conPiece.puzzles;
        foreach(SinglePuzzleScript puzzle in connectedPuzzles)
        {
            puzzle.transform.SetParent(transform);
            foreach (PuzzleConnectionScript puzzleCon in puzzle.puzzleConnections)
            {
                if (puzzleCon != null && !puzzleCon.isConnected && puzzleCon.pointToConnet.myPuzzle.currPiece == this)
                {
                    puzzleCon.isConnected = true;
                    puzzleCon.pointCollider.enabled = false;
                    puzzleCon.pointToConnet.isConnected = true;
                    puzzleCon.pointCollider.enabled = false;
                }
            }
        }
        GameManagerScript.instance.OnPieceConnected();
        ReorganizeChildrens();
        PuzzleRenderOrderScript.instance.RemovePiece(conPiece);
        Destroy(conPiece.gameObject);
    }

    public void SetPuzzlesRenderOrder(int order)
    {
        renderOrder = order;
        foreach(SinglePuzzleScript puzzle in puzzles)
        {
            puzzle.sRender.sortingOrder = order;
        }
    }
}