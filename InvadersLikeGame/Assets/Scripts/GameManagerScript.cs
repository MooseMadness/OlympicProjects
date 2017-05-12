using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour
{
    public int enemyCount;
    public Text scoreText;
    public int score;
    public int playerDamageCost;

    public static GameManagerScript instance;

    private float timer = 0;

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {
        timer += Time.deltaTime;
    }

    public void GameOver()
    {
        string jsCode = @"var token = sessionStorage.access_token;
                        var xmlhttp = new XMLHttpRequest(); 
                        xmlhttp.open('POST', 'https://api.sagaidachniepath.xyz/quests/checkpoint');
                        xmlhttp.setRequestHeader('Content-Type', 'application/json');
                        xmlhttp.setRequestHeader('authorization', 'Bearer ' + token);
                        xmlhttp.onreadystatechange = function() {
                            if (xmlhttp.readyState == 4) {
                                if(xmlhttp.status == 204) {
                                    window.location = 'https://sagaidachniepath.xyz/quest';
                                } 
                            }
                        };
                        xmlhttp.send(JSON.stringify({ points: '" + score + "', elapsedTime: '" + timer * 1000 + "' }));";
        Application.ExternalEval(jsCode);
        SceneManager.LoadScene("Scenes/WaitScene");
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
