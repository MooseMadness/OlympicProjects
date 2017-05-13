using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour
{
    public int soldierCount;
    public int cannonCount;

    public static GameManagerScript instance;

    private static bool isGameEnd = false;

    private float timer = 0;

    private void Start()
    {
        instance = this;
    }

    private void Update()
    {
        timer += Time.deltaTime;
    }

    public void GameOver()
    {
        if (!isGameEnd)
        {
            isGameEnd = true;
            int score = (int)(0.1f * soldierCount) + 100 * cannonCount;
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

    public void AddSoldier(int amount)
    {
        soldierCount += amount;
        if (soldierCount < 0)
            soldierCount = 0;
    }

    public void AddCannon(int amount)
    {
        cannonCount += amount;
        if (cannonCount < 0)
            cannonCount = 0;
    }
}