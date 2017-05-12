using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameMangerScript : MonoBehaviour
{
    public int score;
    public int arrowCost;
    public Text scoreText;
    public int enemyCount;

    public static GameMangerScript instance;

    private float timer;
    private static bool isGameEnd = false;

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {
        timer += Time.deltaTime;
    }

    public void OnLoseArrow()
    {
        score -= arrowCost;
        if(score <= 0)
        {
            score = 0;
            GameOver();
            return;
        }
        scoreText.text = "Левки: " + score;
    }

    public void OnEnemyDeath()
    {
        enemyCount--;
        if (enemyCount <= 0)
            GameOver();
    }

    private void GameOver()
    {
        if (!isGameEnd)
        {
            isGameEnd = true;
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
    }
}
