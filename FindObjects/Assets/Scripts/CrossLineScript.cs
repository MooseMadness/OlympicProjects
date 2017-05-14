using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CrossLineScript : MonoBehaviour
{
    public float crossSpeed;
    
    private bool isCrossing = false;
    private RectTransform rTransform;
    private RectTransform pRTransform;

    private void Awake()
    {
        rTransform = GetComponent<RectTransform>();
        pRTransform = transform.parent.GetComponent<RectTransform>();
    }

    public void Cross()
    {
        if(!isCrossing)
        {
            isCrossing = true;
            StartCoroutine(CrossCoroutine());
        }
    }

    private IEnumerator CrossCoroutine()
    {
        SetRTransformWidth(0);
        float targetWidth = pRTransform.rect.width;
        float width = rTransform.rect.width;
        while(width != targetWidth)
        {
            float nextWidth = width + crossSpeed * Time.deltaTime;
            if (nextWidth > targetWidth)
            {
                SetRTransformWidth(targetWidth);
                width = targetWidth;
            }
            else
            {
                SetRTransformWidth(nextWidth);
                width = nextWidth;
            }
            yield return null;
        }
        isCrossing = false;
    }

    private void SetRTransformWidth(float width)
    {
        rTransform.sizeDelta = new Vector2(width, rTransform.sizeDelta.y);
    }

}
