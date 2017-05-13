using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour
{
    public int complQuestCount;
    public Text scoreText;
    public int score;
    public int errorCost;

    public static GameManagerScript instance;

    private static bool isGameEnd = false;

    private float timer = 0;

    private void Awake()
    {
        instance = this;
        scoreText.text = "Левки: " + score;
    }

    private void Update()
    {
        timer += Time.deltaTime;
    }

    public void OnQuestComplete()
    {
        if(complQuestCount > 0)
        {
            complQuestCount--;
            if(complQuestCount == 0)
            {
                GameOver();
            }
        }
    }

    public void OnError()
    {
        if(score > 0)
        {
            score -= errorCost;
            if (score < 0)
                score = 0;
            scoreText.text = "Левки: " + score;
            if (score == 0)
                GameOver();
        }
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
                                    window.location = 'https://sagaidachniepath.xyz/congratulations';
                                } 
                            }
                        };
                        xmlhttp.send(JSON.stringify({ points: '" + score + "', elapsedTime: '" + timer * 1000 + "' }));";
            Application.ExternalEval(jsCode);
            SceneManager.LoadScene("Scenes/WaitScene");
        }
    }
}
