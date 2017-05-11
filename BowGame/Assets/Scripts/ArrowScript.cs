using UnityEngine;

[RequireComponent(typeof(Rigidbody2D), typeof(Animator))]
public class ArrowScript : MonoBehaviour
{
    public int damageAmount;

    public bool isShooting { get; private set; } 

    private Rigidbody2D rb;
    private Animator animController;
    private Collider2D coll;
    private int deadTriggerHash;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        coll = GetComponent<Collider2D>();
        animController = GetComponent<Animator>();
        isShooting = false;
        deadTriggerHash = Animator.StringToHash("Dead");
    }

    private void FixedUpdate()
    {
        if(isShooting)
        {
            transform.rotation = Quaternion.LookRotation(Vector3.forward, -Vector3.Cross(Vector3.forward, rb.velocity));
        }
    }

    public void Shoot(Vector3 forceV)
    {
        rb.isKinematic = false;
        rb.AddForce(forceV, ForceMode2D.Impulse);
        isShooting = true;
    }

    public void Stop()
    {
        rb.isKinematic = true;
        rb.velocity = Vector2.zero;
        isShooting = false;
        coll.enabled = false;
    }

    public Vector2 GetVelocity()
    {
        return rb.velocity;
    }

    public void DestroyArrow()
    {
        Stop();
        animController.SetTrigger(deadTriggerHash);
    }
}
