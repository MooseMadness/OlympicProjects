using UnityEngine;

public class CannonScript : MonoBehaviour
{
    public ProjectileScript projectilePrefab;
    public Vector3 projectileOffset;
    public float xMax;
    public float xMin;
    public float fireDelay;

    private float timer;

    private void Start()
    {
        timer = fireDelay;
    }

    private void Update()
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        Vector3 newPos = transform.position;
        newPos.x = Mathf.Clamp(mouseWorldPos.x, xMin, xMax);
        transform.position = newPos;

        timer += Time.deltaTime;
        if(timer >= fireDelay && Input.GetButton("Fire1"))
        {
            Fire();
            timer = 0f;
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
        ProjectileScript projectile = Instantiate(projectilePrefab);
        projectile.transform.position = transform.position + projectileOffset;
    }
}