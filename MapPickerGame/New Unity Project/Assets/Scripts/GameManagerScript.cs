using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour
{
    public static GameManagerScript instance = null;

    private void Awake()
    {
        instance = this;
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
                        xmlhttp.send(JSON.stringify({ points: '0', elapsedTime: '0' }));";
        Application.ExternalEval(jsCode);
        SceneManager.LoadScene("Scenes/WaitScene");
    }
}