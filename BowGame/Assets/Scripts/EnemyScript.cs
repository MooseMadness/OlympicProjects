using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Animator), typeof(SpriteRenderer))]
public class EnemyScript : ArrowTargetScript
{
    public int maxHealth;
    public UnityEvent onDeath;

    private int deadTriggerHash;
    private int currHealth;
    private SpriteRenderer sRender;

    protected Animator animController;

    protected override void Start()
    {
        base.Start();
        currHealth = maxHealth;
        animController = GetComponent<Animator>();
        sRender = GetComponent<SpriteRenderer>();
        deadTriggerHash = Animator.StringToHash("Dead");
    }

    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        if(arrow.isShooting)
        {
            arrow.DestroyArrow();
            TakeDamage(arrow.damageAmount);
        }
    }

    private void SetSpriteColor()
    {
        Color newColor = sRender.color;
        float healthPercent = (float)currHealth / maxHealth;
        newColor.b = healthPercent;
        newColor.g = healthPercent;
        sRender.color = newColor;
    }

    public void TakeDamage(int amount)
    {
        currHealth -= amount;
        if (currHealth > 0)
        {
            SetSpriteColor();
        }
        else
        {
            enabled = false;
            currHealth = 0;
            SetSpriteColor();
            animController.applyRootMotion = false;
            animController.SetTrigger(deadTriggerHash);
            GameObject animParent = new GameObject("animParent");
            animParent.transform.position = transform.position;
            animParent.transform.localScale = transform.localScale;
            animParent.transform.SetParent(transform.parent);
            transform.SetParent(animParent.transform);
            gameObject.layer = 0;
            onDeath.Invoke();
        }
    }
}
