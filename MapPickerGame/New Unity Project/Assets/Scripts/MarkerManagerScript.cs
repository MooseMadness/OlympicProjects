using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MarkerManagerScript : MonoBehaviour, IPointerClickHandler 
{
    public MarkerScript[] markers;
    //сколько в единичном отрезке километров
    public float mapScale;

    public Text questionText;
    public Text errorText;
    public Text attemptText;

    public Canvas mainCanvas;

    private int currIndex = 0;
    private int currAttemptCount;

    private void Start()
    {
        InitMarker(markers[currIndex]);
    }

    private void InitMarker(MarkerScript marker)
    {
        questionText.text = marker.questionText;
        attemptText.text = "Осталось попыток: " + marker.attemptCount;
        currAttemptCount = marker.attemptCount;
        errorText.text = "";
    }

    private void ToNextMarker()
    {
        markers[currIndex].ShowMarker();
        currIndex++;
        if (currIndex < markers.Length)
        {
            InitMarker(markers[currIndex]);
        }
        else
        {
            GameManagerScript.instance.GameOver();
            enabled = false;
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mouseWorldPos.z = 0;
        float dist = (mouseWorldPos - markers[currIndex].transform.position).magnitude;
        if (dist > markers[currIndex].radius)
        {
            currAttemptCount--;
            
            if (currAttemptCount == 0)
            {
                ToNextMarker();
            }
            else
            {
                errorText.text = "Ошибка на " + (int)(dist * mapScale) + " км";
                attemptText.text = "Осталось попыток: " + currAttemptCount;
            }
        }
        else
        {
            ToNextMarker();
        }
    }
}
