using UnityEngine;
using UnityEngine.EventSystems;

public class QuestionScript : MonoBehaviour, IDropHandler, IPointerEnterHandler, IPointerExitHandler
{
    public AnswerScript answer;

    public void OnDrop(PointerEventData eventData)
    {
        if(eventData.pointerDrag != null)
        {
            if (eventData.pointerDrag.gameObject == answer.gameObject)
            {
                enabled = false;
                answer.Put();
                GameManagerScript.instance.CheckQuestion();
            }
            else
            {
                GameManagerScript.instance.WrongAnswer(answer);
            }
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if(eventData.pointerDrag != null)
        {
            AnswerScript answer = eventData.pointerDrag.gameObject.GetComponent<AnswerScript>();
            if (answer != null)
                answer.SetHighltight(true);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (eventData.pointerDrag != null)
        {
            AnswerScript answer = eventData.pointerDrag.gameObject.GetComponent<AnswerScript>();
            if (answer != null)
                answer.SetHighltight(false);
        }
    }
}
