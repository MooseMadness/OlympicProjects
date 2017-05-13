using UnityEngine;
using UnityEngine.UI;

public class QuestionScreenScript : MonoBehaviour
{
    public Text armyStateText;

    public int gaSoldierCost;
    public int baSoldierCost;
    public int gaCannonCost;
    public int baCannonCost;

    public void OnGoodAnswer()
    {
        GameManagerScript.instance.AddSoldier(gaSoldierCost);
        GameManagerScript.instance.AddCannon(gaCannonCost);
    }

    public void OnBadAnswer()
    {
        GameManagerScript.instance.AddSoldier(baSoldierCost);
        GameManagerScript.instance.AddCannon(baCannonCost);
    }

    public void Setup()
    {
        armyStateText.text = string.Format("{0} козаків\n{1} гармат", GameManagerScript.instance.soldierCount, GameManagerScript.instance.cannonCount);
    }
}
