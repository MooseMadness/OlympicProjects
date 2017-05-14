using UnityEngine;

public class WarriorLvlManagerScript : MonoBehaviour
{
    public Vector3 warriorLeftTargetAE;
    public MoveableEnemyScript warriorScript;

    public void OnExplosion()
    {
        warriorScript.leftTarget.position = warriorLeftTargetAE;
        if (warriorScript.transform.position.x <= warriorLeftTargetAE.x)
            warriorScript.ChangeTarget();
    }
}