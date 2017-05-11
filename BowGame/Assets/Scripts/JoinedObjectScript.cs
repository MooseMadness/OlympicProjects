using UnityEngine;

[RequireComponent(typeof(DistanceJoint2D), typeof(LineRenderer))]
public class JoinedObjectScript : PushableScript
{
    public float ropeLineYOffset;
    public Collider2D ropeCollider;

    private DistanceJoint2D joint;
    private LineRenderer ropeLine;

    protected override void Start()
    {
        base.Start();
        joint = GetComponent<DistanceJoint2D>();
        ropeLine = GetComponent<LineRenderer>();
        Vector3 dir = (joint.connectedBody.transform.position - transform.position).normalized;
        Vector3 ropeStartPos = transform.position + dir * ropeLineYOffset;
        SetRopeLine(ropeStartPos, joint.connectedBody.transform.position);
    }

    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            if (isTrigger)
            {
                joint.enabled = false;
                rb.freezeRotation = false;
                ropeLine.enabled = false;
                ropeCollider.enabled = false;
            }
            else
            {
                base.InteractWithArrow(arrow, isTrigger);
            }
        }
    }

    private void FixedUpdate()
    {
        if(joint.enabled)
        {
            Vector3 dir = (joint.connectedBody.transform.position - transform.position).normalized;
            transform.rotation = Quaternion.LookRotation(Vector3.forward, dir);
            Vector3 ropeStartPos = transform.position + dir * ropeLineYOffset;
            SetRopeLine(ropeStartPos, joint.connectedBody.transform.position);
        }
    }

    private void SetRopeLine(Vector3 start, Vector3 end)
    {
        start.z = -1;
        end.z = -1;
        ropeLine.SetPosition(0, start);
        ropeLine.SetPosition(1, end);
    }
}
