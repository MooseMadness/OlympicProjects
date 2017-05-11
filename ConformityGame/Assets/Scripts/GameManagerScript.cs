using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Physics2DRaycaster))]
public class GameManagerScript : MonoBehaviour
{
    public static GameManagerScript instance = null;

    public int score;
    public Text scoreText;
    public Text errorText;

    public int questionCount;
    public int wrongAswerCost;

    private float timer = 0;
    private Physics2DRaycaster raycaster;

    private void Awake()
    {
        instance = this;
        raycaster = GetComponent<Physics2DRaycaster>();
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
        raycaster.enabled = false;
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