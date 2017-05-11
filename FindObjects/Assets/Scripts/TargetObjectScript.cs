using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Collider2D), typeof(SpriteRenderer))]
public class TargetObjectScript : MonoBehaviour, IPointerClickHandler
{
    public QuestScript targetQuest;
    
    private SpriteRenderer sRend;
    private Collider2D myColl;

    private void Awake()
    {
        sRend = GetComponent<SpriteRenderer>();
        myColl = GetComponent<Collider2D>();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        sRend.enabled = true;
        myColl.enabled = false;
        targetQuest.CheckQuest();
        enabled = false;
    }
}
