using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Collider2D), typeof(SpriteRenderer))]
public class AnswerScript : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public Vector3 laidPosition;
    public Vector3 laidScale;
    public Sprite highlightSprite;
    public string answeName;

    public bool isLaid { private set; get; }

    private Vector3 dragOffset;
    private Vector3 startPosition;
    private Collider2D myColl;
    private SpriteRenderer sRender;
    private Sprite normalSprite;
    private int normalRenderOrder;

    private void Start()
    {
        isLaid = false;
        startPosition = transform.position;
        myColl = GetComponent<Collider2D>();
        sRender = GetComponent<SpriteRenderer>();
        normalSprite = sRender.sprite;
        normalRenderOrder = sRender.sortingOrder;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mouseWorldPos.z = 0;
        dragOffset = transform.position - mouseWorldPos;
        myColl.enabled = false;
        sRender.sortingOrder = 1;
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mouseWorldPos.z = 0;
        transform.position = mouseWorldPos + dragOffset;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (!isLaid)
        {
            myColl.enabled = true;
            transform.position = startPosition;
            SetHighltight(false);
            sRender.sortingOrder = normalRenderOrder;
        }
    }

    public void Put()
    {
        isLaid = true;
        transform.position = laidPosition;
        transform.localScale = laidScale;
        enabled = false;
        SetHighltight(false);
        sRender.sortingOrder = -1;
    }

    public void SetHighltight(bool highlight)
    {
        sRender.sprite = highlight ? highlightSprite : normalSprite;
    }
}
