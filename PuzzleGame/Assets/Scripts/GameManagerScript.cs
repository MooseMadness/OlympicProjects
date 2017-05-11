using UnityEngine;
using UnityEngine.UI;

public class GameManagerScript : MonoBehaviour
{
    public int score;
    public int puzzlePieceCount;
    public int scoreSub;
    public float timeToStartSub;

    public Text scoreText;
    public Text timeText;

    public static GameManagerScript instance;

    private float timer = 0;
    private float prevSubTime;

    private void Awake()
    {
        instance = this;
        prevSubTime = timeToStartSub;
    }

    private void Update()
    {
        timer += Time.deltaTime;
        SetTime();
        if(timer >= timeToStartSub)
        {
            int passedSeconds = (int)(timer - prevSubTime);
            if(passedSeconds >= 1)
            {
                score -= passedSeconds * scoreSub;
                if(score <= 0)
                {
                    GameOver();
                    return;
                }
                scoreText.text = "Левки: " + score;
                prevSubTime += passedSeconds;
            }
        }
    }

    private void SetTime()
    {
        int minutes = (int)(timer / 60);
        int seconds = (int)(timer - minutes * 60);
        timeText.text = minutes + ":" + seconds;
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

    public void OnPieceConnected()
    {
        puzzlePieceCount--;
        if (puzzlePieceCount <= 1)
            GameOver();
    }
}
