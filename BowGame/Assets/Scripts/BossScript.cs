using UnityEngine;

public class BossScript : EnemyScript
{
    public Transform seatTarget;
    public float speed;

    private int seatTriggerHash;
    private bool isSeat = false;

    protected override void Start()
    {
        base.Start();
        seatTriggerHash = Animator.StringToHash("Seat");
    }

    private void Update()
    {
        if(!isSeat)
        {
            Vector3 dirV = seatTarget.position - transform.position;
            float deltaSpeed = speed * Time.deltaTime;
            if(dirV.sqrMagnitude > deltaSpeed * deltaSpeed)
            {
                transform.Translate(dirV.normalized * deltaSpeed);
            }
            else
            {
                transform.position = seatTarget.position;
                animController.SetTrigger(seatTriggerHash);
                isSeat = true;
            }
        }
    }
}
