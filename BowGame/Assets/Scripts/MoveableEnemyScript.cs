using UnityEngine;

public class MoveableEnemyScript : EnemyScript
{
    public Transform leftTarget;
    public Transform rightTarget;
    public float speed;

    private Transform nextTarget;
    private int rotateTriggerHash;
    private bool isRotating = false;

    protected override void Start()
    {
        base.Start();
        nextTarget = transform.localScale.x == -1 ? rightTarget : leftTarget;
        rotateTriggerHash = Animator.StringToHash("Rotate");
    }

    private void Update()
    {
        if (!isRotating)
        {
            Vector3 dirV = nextTarget.position - transform.position;
            float deltaSpeed = speed * Time.deltaTime;
            if (dirV.sqrMagnitude < deltaSpeed * deltaSpeed)
            {
                transform.position = nextTarget.position;
                ChangeTarget();
            }
            else
            {
                transform.Translate(dirV.normalized * deltaSpeed);
            }
        }
    }

    public void ChangeTarget()
    {
        isRotating = true;
        animController.SetTrigger(rotateTriggerHash);
    }

    public void OnRotationEnd()
    {
        isRotating = false;
        Vector3 newScale = transform.localScale;
        newScale.x *= -1;
        transform.localScale = newScale;
        nextTarget = transform.localScale.x == -1 ? rightTarget : leftTarget;
    }
}
