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
        bool needReorganize = false;
        foreach(SinglePuzzleScript puzzle in puzzles)
        {
            if (puzzle.CheckPuzzle())
                needReorganize = true;
        }
        if (needReorganize)
            ReorganizeChildrens();
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

    public void SetPuzzlesRenderOrder(int order)
    {
        renderOrder = order;
        foreach(SinglePuzzleScript puzzle in puzzles)
        {
            puzzle.sRender.sortingOrder = order;
        }
    }
}