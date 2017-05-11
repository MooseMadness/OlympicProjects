using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PictureScript : MonoBehaviour, IPointerClickHandler
{
    public Text wrongClickEffect;
    public Vector2 wrongEffectOffset;
    public Canvas mainCanvas;

    public void OnPointerClick(PointerEventData eventData)
    {
        Text wrongClickText = Instantiate(wrongClickEffect);
        wrongClickText.rectTransform.anchoredPosition = (Vector2)Input.mousePosition + wrongEffectOffset;
        wrongClickText.rectTransform.SetParent(mainCanvas.transform);
        wrongClickText.rectTransform.localScale = new Vector3(1, 1, 1);
        wrongClickText.text = "-" + GameManagerScript.instance.errorCost;
        GameManagerScript.instance.OnError();        
    }
}