using UnityEngine;

public class MarkerScript : MonoBehaviour
{
    public string questionText;
    public float radius;
    public int attemptCount;
    public int attemptScoreCost;

    private SpriteRenderer sRend;

    private void Start()
    {
        sRend = GetComponentInChildren<SpriteRenderer>();
        sRend.enabled = false;
        Vector3 newPos = transform.position;
        newPos.z = 0;
        transform.position = newPos;
    }

    public void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, radius);
    }

    public void ShowMarker()
    {
        sRend.enabled = true;
    }
}
