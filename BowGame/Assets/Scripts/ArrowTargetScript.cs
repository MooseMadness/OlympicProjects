using UnityEngine;

[RequireComponent(typeof(Collider2D))]
public abstract class ArrowTargetScript : MonoBehaviour
{
    private int arrowLayer;

    protected virtual void Start()
    {
        arrowLayer = LayerMask.NameToLayer("Arrow");
    }

    protected virtual void OnTriggerEnter2D(Collider2D coll)
    {
        CheckCollision(coll, true);
    }

    protected virtual void OnCollisionEnter2D(Collision2D coll)
    {
        CheckCollision(coll.collider, false);
    }

    private void CheckCollision(Collider2D coll, bool isTrigger)
    {
        if (coll.gameObject.layer == arrowLayer)
        {
            ArrowScript arrow = coll.gameObject.GetComponent<ArrowScript>();
            InteractWithArrow(arrow, isTrigger);
        }
    }

    protected abstract void InteractWithArrow(ArrowScript arrow, bool isTrigger);
}
