using UnityEngine;

[RequireComponent(typeof(Animator))]
public class ExplosionObjectScript : ArrowTargetScript
{
    public GameObject explosionEffectPrefab;
    public float radius;
    public int damageAmount;
    public LayerMask damageableObjects;

    private Animator animController;
    private int deadTriggerHash;

    protected override void Start()
    {
        base.Start();
        animController = GetComponent<Animator>();
        deadTriggerHash = Animator.StringToHash("Dead");
    }

    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            Boom();
        }
    }

    public void Boom()
    {
        Collider2D[] enemiesColliders = Physics2D.OverlapCircleAll(transform.position, radius, damageableObjects);
        foreach(Collider2D enemyCollider in enemiesColliders)
        {
            Debug.Log(enemyCollider.gameObject.name);
            EnemyScript enemy = enemyCollider.GetComponent<EnemyScript>();
            enemy.TakeDamage(damageAmount);
        }
        Instantiate(explosionEffectPrefab, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
