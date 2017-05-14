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
}