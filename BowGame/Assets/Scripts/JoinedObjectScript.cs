using UnityEngine;
using System.Collections.Generic;

[RequireComponent(typeof(Rigidbody2D), typeof(Animator))]
public class JoinedObjectScript : ObstacleScript
{
    public int damageAmount;

    private Rigidbody2D rb;
    private List<ArrowScript> arrows = new List<ArrowScript>();
    private Collider2D myColl;
    private Animator animController;
    private int deadTrigerHash;
    private bool isFalled = false;

    protected override void Start()
    {
        base.Start();
        rb = GetComponent<Rigidbody2D>();
        myColl = GetComponent<Collider2D>();
        animController = GetComponent<Animator>();
        deadTrigerHash = Animator.StringToHash("Dead");
    }

    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            AttachArrow(arrow);
        }
    }

    protected override void OnTriggerEnter2D(Collider2D coll)
    {
        base.OnTriggerEnter2D(coll);
        if (rb.velocity.sqrMagnitude > float.Epsilon)
        {
            EnemyScript enemy = coll.GetComponent<EnemyScript>();
            if (enemy != null)
            {
                enemy.TakeDamage(damageAmount);
                rb.isKinematic = true;
                rb.velocity = Vector2.zero;
                myColl.enabled = false;
                enabled = false;
                animController.SetTrigger(deadTrigerHash);
                foreach(ArrowScript arrow in arrows)
                {
                    arrow.DestroyArrow();
                }
            }
        }
    }

    protected void AttachArrow(ArrowScript arrow)
    {
        arrow.Stop();
        arrow.transform.SetParent(transform);
        arrows.Add(arrow);
    }

    public void Fall()
    {
        if (!isFalled)
        {
            isFalled = true;
            rb.isKinematic = false;
        }
    }
}
