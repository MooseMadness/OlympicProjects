using UnityEngine;

[RequireComponent(typeof(Rigidbody2D), typeof(Animator))]
public class PushableScript : ArrowTargetScript
{
    public float pushForce;
    public int damageAmount;

    protected Rigidbody2D rb;

    private Animator animController;
    private int deadTriggerHash;
    private Collider2D myColl;

    protected override void Start()
    {
        base.Start();
        rb = GetComponent<Rigidbody2D>();
        myColl = GetComponent<Collider2D>();
        animController = GetComponent<Animator>();
        deadTriggerHash = Animator.StringToHash("Dead");
    }

    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            Vector2 arrowVelocityDir = arrow.GetVelocity().normalized;
            rb.AddForce(arrowVelocityDir * pushForce, ForceMode2D.Impulse);
            arrow.DestroyArrow();
        }
    }

    protected override void OnTriggerEnter2D(Collider2D coll)
    {
        base.OnTriggerEnter2D(coll);
        EnemyScript enemy = coll.GetComponent<EnemyScript>();
        if (enemy != null)
        {
            enemy.TakeDamage(damageAmount);
            enabled = false;
            rb.isKinematic = true;
            myColl.enabled = false;
            rb.velocity = Vector2.zero;
            animController.SetTrigger(deadTriggerHash);
        }
    }
}