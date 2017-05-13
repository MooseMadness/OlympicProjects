using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Collider2D), typeof(Rigidbody2D))]
public class SinglePuzzleScript : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    //w - top; x - right
    //y - bottom; z - left
    public Vector3[] offsets;

    //0 - top; 1 - right
    //2 - bottom; 3 - left;
    public PuzzleConnectionScript[] puzzleConnections;

    [HideInInspector]
    public PuzzlePieceScript currPiece;
    [HideInInspector]
    public SpriteRenderer sRender;

    private Vector3 dragOffset;

    private void Awake()
    {
        sRender = GetComponent<SpriteRenderer>();
        for (int i = 0; i < 4; i++)
        {
            if (puzzleConnections[i] != null)
            {
                puzzleConnections[i].myPuzzle = this;
                puzzleConnections[i].connIndex = i;
            }
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        dragOffset = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
        dragOffset.z = 0;
        PuzzleRenderOrderScript.instance.StartDrag(currPiece);
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector3 mousePos = Input.mousePosition;
        bool isInScreenBoundaries = mousePos.y <= Screen.height - 10 && mousePos.y >= 10
                                    && mousePos.x <= Screen.width - 10 && mousePos.x >= 10;
        if (isInScreenBoundaries)
        {
            Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            mouseWorldPos.z = 0;
            transform.parent.position += mouseWorldPos - transform.position - dragOffset;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        currPiece.OnDragOver();
    }

    public System.Collections.IEnumerable GetConnected()
    {
        foreach(PuzzleConnectionScript conn in puzzleConnections)
        {
            if(conn != null && !conn.isConnected && conn.canConnect)
            {
                yield return conn;
            }
        }
    } 

    //true - произошло хотя-бы 1 соединение
    public bool CheckPuzzle()
    {
        bool result = false;
        foreach(PuzzleConnectionScript conn in GetConnected())
        {
            result = true;
            Connect(conn);
        }
        return result;
    }

    private void Connect(PuzzleConnectionScript conn)
    {
        PuzzlePieceScript connPiece = conn.pointToConnet.myPuzzle.currPiece;

        Transform connPieceTransform = conn.pointToConnet.myPuzzle.transform.parent;
        connPieceTransform.position += transform.position - conn.pointToConnet.myPuzzle.transform.position + offsets[conn.connIndex];

        SinglePuzzleScript[] connectedPuzzles = connPiece.puzzles;
        foreach (SinglePuzzleScript connPuzzle in connectedPuzzles)
        {
            foreach (PuzzleConnectionScript c in connPuzzle.GetConnected())
            {
                if(c.pointToConnet.myPuzzle.currPiece == currPiece)
                {
                    c.isConnected = true;
                    c.pointToConnet.isConnected = true;
                }
            }
        }
        
        PuzzleRenderOrderScript.instance.RemovePiece(connPiece);

        foreach (SinglePuzzleScript puzzle in connectedPuzzles)
            puzzle.transform.SetParent(transform.parent);
        Destroy(connPieceTransform.gameObject);
        GameManagerScript.instance.OnPieceConnected();
    }
}