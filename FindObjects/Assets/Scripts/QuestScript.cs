using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class QuestScript : MonoBehaviour
{
    public string itemName;
    public int itemCount;

    private Animator subEffect;
    private Text myText;
    private CrossLineScript crossScript;
    private int aStateHash;

    private void Start()
    {
        myText = GetComponent<Text>();
        myText.text = itemCount > 1 ? itemName + ": x" + itemCount : itemName;
        crossScript = GetComponentInChildren<CrossLineScript>();
        subEffect = GetComponentInChildren<Animator>();
        aStateHash = Animator.StringToHash("SubTargetImg");
    }

    public void CheckQuest()
    {
        if(itemCount > 0)
        {
            itemCount--;
            if(itemCount == 0)
            {
                myText.text = itemName;
                crossScript.Cross();
                GameManagerScript.instance.OnQuestComplete();
            }
            else
            {
                subEffect.Play(aStateHash);
                myText.text = itemName + ": x" + itemCount;
            }
        }
    }
}