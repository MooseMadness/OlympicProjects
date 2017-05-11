using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider2D))]
public class GameOverAreaScript : MonoBehaviour
{
    public LayerMask enemyLayers;
    public UnityEvent onGameOver;

    private void OnTriggerEnter2D(Collider2D coll)
    {
        if (enemyLayers == (enemyLayers | (1 << coll.gameObject.layer)))
        {
            onGameOver.Invoke();
        }
    }
}