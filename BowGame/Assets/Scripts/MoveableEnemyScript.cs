using UnityEngine;

public class MoveableEnemyScript : EnemyScript
{
    public Transform leftTarget;
    public Transform rightTarget;
    public float speed;

    private Transform nextTarget;

    protected override void Start()
    {
        base.Start();
        nextTarget = transform.localScale.x == 1 ? rightTarget : leftTarget;
    }

    private void Update()
    {
        Vector3 dirV = nextTarget.position - transform.position;
        if(dirV.sqrMagnitude < speed * speed)
        {
            transform.position = nextTarget.position;
            ChangeTarget();
        }
        else
        {
            transform.Translate(dirV.normalized * speed * Time.deltaTime);
        }
    }

    private void ChangeTarget()
    {
        Vector3 newScale = transform.localScale;
        newScale.x *= -1;
        transform.localScale = newScale;
        nextTarget = transform.localScale.x == 1 ? rightTarget : leftTarget;
    }
}
