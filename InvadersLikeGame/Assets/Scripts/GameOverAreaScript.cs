using UnityEngine;

[RequireComponent(typeof(Collider2D))]
public class GameOverAreaScript : MonoBehaviour
{
    public LayerMask enemyLayers;

    private void OnTriggerEnter2D(Collider2D coll)
    {
        if (enemyLayers == (enemyLayers | (1 << coll.gameObject.layer)))
        {
            GameManagerScript.instance.score = 0;
            GameManagerScript.instance.GameOver();
        }
    }
}