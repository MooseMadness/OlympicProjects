using UnityEngine;
using UnityEngine.UI;

public class GameManagerScript : MonoBehaviour
{
    public int enemyCount;
    public Text scoreText;
    public int score;
    public int playerDamageCost;

    public static GameManagerScript instance;

    private void Awake()
    {
        instance = this;
    }

    public void GameOver()
    {
        Time.timeScale = 0;
    }

    public void OnEnemyDie()
    {
        enemyCount--;
        if (enemyCount <= 0)
            GameOver();
    }

    public void OnPlayerDamage()
    {
        score -= playerDamageCost;
        if(score <= 0)
        {
            score = 0;
            GameOver();
            return;
        }
        scoreText.text = "Левки: " + score;
    }
}
