using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class ProjectileScript : MonoBehaviour
{
    public float speed;
    public float timeToDeath;
    public int damageAmount;
    public LayerMask damageLayers;

    private void Start()
    {
        Destroy(gameObject, timeToDeath);
    }

    private void Update()
    {
        transform.Translate(transform.up * speed * Time.deltaTime, Space.World);
    }

    private void OnTriggerEnter2D(Collider2D coll)
    {
        if (damageLayers == (damageLayers | (1 << coll.gameObject.layer)))
        {
            HealthScript health = coll.GetComponent<HealthScript>();
            if(health != null)
                health.TakeDamage(damageAmount);
        }
    }
}