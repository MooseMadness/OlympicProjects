using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour
{
    public static GameManagerScript instance = null;

    public int score;
    public Text scoreText;
    public Text errorText;

    public int questionCount;
    public int wrongAswerCost;

    private static bool isGameEnd = false;

    private float timer = 0;

    private void Awake()
    {
        instance = this;
    }   

    private void Update()
    {
        timer += Time.deltaTime;
    }

    public void WrongAnswer(AnswerScript correctAnswer)
    {
        score -= wrongAswerCost;
        if (score < 0)
            score = 0;
        scoreText.text = "Левки: " + score;
        errorText.text = "Це не " + correctAnswer.answeName;
        if (score == 0)
            GameOver();
    }

    public void CheckQuestion()
    {
        questionCount--;
        errorText.text = "";
        if (questionCount <= 0)
            GameOver();
    }

    public void GameOver()
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