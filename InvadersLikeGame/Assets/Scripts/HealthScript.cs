using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(SpriteRenderer), typeof(Collider2D))]
public class HealthScript : MonoBehaviour
{
    public int maxHealth;
    public LayerMask damageLayers;
    public UnityEvent onDeath;
    public UnityEvent onDamage;

    private SpriteRenderer sRender;
    private int currHealth;

    private void Start()
    {
        currHealth = maxHealth;
        sRender = GetComponent<SpriteRenderer>();
    }

    private void SetSpriteColor()
    {
        Color newColor = sRender.color;
        float healthPercent = (float)currHealth / maxHealth;
        newColor.b = healthPercent;
        newColor.g = healthPercent;
        sRender.color = newColor; 
    }

    private void TakeDamage(int amount)
    {
        if(currHealth > 0)
        {
            onDamage.Invoke();
            currHealth -= amount;
            if(currHealth <= 0)
            {
                onDeath.Invoke();
                Destroy(gameObject);
            }
            else
            {
                SetSpriteColor();
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D coll)
    {
        if(damageLayers == (damageLayers | (1 << coll.gameObject.layer)))
        {
            ProjectileScript projectile = coll.GetComponent<ProjectileScript>();
            TakeDamage(projectile.damageAmount);
        }
    }
}
