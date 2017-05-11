using UnityEngine;
using UnityEngine.UI;

public class GameManagerScript : MonoBehaviour
{
    public int complQuestCount;
    public Text scoreText;
    public int score;
    public int errorCost;

    public static GameManagerScript instance;

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
        string jsCode = @"var token = sessionStorage.access_token;
                        var xmlhttp = new XMLHttpRequest();   
                        xmlhttp.open('POST', 'https://api.sagaidachniepath.xyz/quests/checkpoint');
                        xmlhttp.setRequestHeader('Content-Type', 'application/json');
                        xmlhttp.setRequestHeader('authorization', 'Bearer ' + token);
                        xmlhttp.send(JSON.stringify({ points: " + score + ", elapsedTime: " + timer * 1000 + @" }));
                        window.location = 'https://sagaidachniepath.xyz/quests';";
        Application.ExternalEval(jsCode);
    }
}
