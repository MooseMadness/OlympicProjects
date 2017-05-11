using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(LineRenderer))]
public class KozakDragScript : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public Transform handTransform;
    public Transform handMaxPos;
    public Transform arrowStartPos;
    public Transform bodyCenterTransform;

    public ArrowScript arrowPrefab;
    public float shootForce;

    public float maxAngle;
    public float minAngle;
    public float maxTension;

    private Vector3 handStartLocPos;
    private float handMoveDist;
    private Quaternion bodyStartRot;
    private Vector3 dragStartPos;
    private ArrowScript currArrow;
    private LineRenderer dragLine;

    private void Start()
    {
        dragLine = GetComponent<LineRenderer>();
        handStartLocPos = handTransform.localPosition;
        bodyStartRot = bodyCenterTransform.rotation;
        handMoveDist = (handMaxPos.transform.position - handTransform.position).magnitude;
        CreateArrow();
    }

    private void CreateArrow()
    {
        currArrow = (ArrowScript)Instantiate(arrowPrefab, arrowStartPos.position, arrowStartPos.rotation);
        currArrow.transform.SetParent(arrowStartPos.parent);
    }

    private void SetDragLine(Vector3 start, Vector3 end)
    {
        start.z = -1;
        end.z = -1;
        dragLine.SetPosition(0, start);
        dragLine.SetPosition(1, end);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        dragStartPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        dragLine.enabled = true;
        SetDragLine(dragStartPos, dragStartPos);
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector3 tensionV = Camera.main.ScreenToWorldPoint(Input.mousePosition) - dragStartPos;
        float currTension = Mathf.Clamp(tensionV.magnitude, 0, maxTension);
        float currHandDist = handMoveDist * (currTension / maxTension);
        handTransform.localPosition = handStartLocPos + Vector3.right * currHandDist;
        SetDragLine(dragStartPos, dragStartPos + tensionV.normalized * currTension);

        Quaternion targetRot = Quaternion.LookRotation(Vector3.forward, -Vector3.Cross(tensionV, Vector3.forward));
        float targetRotZAngle = targetRot.eulerAngles.z;
        bool inAngleLimit = (minAngle > maxAngle && (targetRotZAngle > minAngle || targetRotZAngle < maxAngle)) ||
                            (minAngle < maxAngle && targetRotZAngle > minAngle && targetRotZAngle < maxAngle); 
        if (inAngleLimit)
        {
            bodyCenterTransform.rotation = targetRot;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        Vector3 tensionV = Camera.main.ScreenToWorldPoint(Input.mousePosition) - dragStartPos;
        float currTension = Mathf.Clamp(tensionV.magnitude, 0, maxTension);

        currArrow.transform.SetParent(null);
        currArrow.Shoot(-currArrow.transform.right * shootForce * (currTension / maxTension));
        CreateArrow();

        handTransform.localPosition = handStartLocPos;
        bodyCenterTransform.rotation = bodyStartRot;
        dragLine.enabled = false;
    }
}