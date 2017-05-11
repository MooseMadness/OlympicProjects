using UnityEngine;

public class ProjectileScript : MonoBehaviour
{
    public float flySpeed;
    public float timeToLive;
    public int damageAmount;

    private void Start()
    {
        Destroy(gameObject, timeToLive);
    }

    private void Update()
    {
        transform.Translate(transform.up * flySpeed * Time.deltaTime, Space.World);
    }
}
