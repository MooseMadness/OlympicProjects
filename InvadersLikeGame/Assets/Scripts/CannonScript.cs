using UnityEngine;

[RequireComponent(typeof(Animator), typeof(SpriteRenderer), typeof(AudioSource))]
public class CannonScript : MonoBehaviour
{
    public ProjectileScript projectilePrefab;
    public Vector3 projectileOffset;
    public float xMax;
    public float xMin;

    private Animator animControll;
    private bool canFire = true;
    private int fireTriggerHash;
    private SpriteRenderer sRender;
    private Sprite normalSprite;
    private AudioSource audioSource;

    private void Start()
    {
        animControll = GetComponent<Animator>();
        fireTriggerHash = Animator.StringToHash("Fire");
        sRender = GetComponent<SpriteRenderer>();
        normalSprite = sRender.sprite;
        audioSource = GetComponent<AudioSource>();
    }

    private void Update()
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        Vector3 newPos = transform.position;
        newPos.x = Mathf.Clamp(mouseWorldPos.x, xMin, xMax);
        transform.position = newPos;
        if(canFire && Input.GetButton("Fire1"))
        {
            Fire();
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawWireSphere(new Vector3(xMax, transform.position.y, 0), 0.5f);
        Gizmos.DrawWireSphere(new Vector3(xMin, transform.position.y, 0), 0.5f);

        Gizmos.color = Color.cyan;
        Gizmos.DrawWireSphere(transform.position + projectileOffset, 0.5f);
    }   

    private void Fire()
    {
        canFire = false;
        ProjectileScript projectile = Instantiate(projectilePrefab);
        projectile.transform.position = transform.position + projectileOffset;
        animControll.SetTrigger(fireTriggerHash);
        if(audioSource.enabled)
            audioSource.PlayOneShot(audioSource.clip);
    }

    public void OnEndFireAnime()
    {
        canFire = true;
        sRender.sprite = normalSprite;
    }
}