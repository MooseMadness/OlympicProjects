using UnityEngine;
using URand = UnityEngine.Random;

public class EnemyFireScript : MonoBehaviour
{
    public ProjectileScript enemyBulletPrefab;
    public Vector3 enemyBulletOffset;
    public float minSpawnTime;
    public float maxSpawnTime;

    private float timer = 0;
    private float currSpawnTime;

    private void Start()
    {
        currSpawnTime = URand.Range(minSpawnTime, maxSpawnTime);
    }

    private void Update()
    {
        timer += Time.deltaTime;
        if(timer >= currSpawnTime)
        {
            currSpawnTime = URand.Range(minSpawnTime, maxSpawnTime);
            timer = 0;
            ProjectileScript bullet = Instantiate(enemyBulletPrefab);
            bullet.transform.position = transform.position + enemyBulletOffset;
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;
        Gizmos.DrawWireSphere(transform.position + enemyBulletOffset, 0.5f);
    }
}