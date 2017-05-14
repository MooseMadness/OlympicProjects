using UnityEngine;

[RequireComponent(typeof(Collider2D))]
public class PuzzleConnectionScript : MonoBehaviour
{
    public PuzzleConnectionScript pointToConnet;

    [HideInInspector]
    public SinglePuzzleScript myPuzzle;
    [HideInInspector]
    public int connIndex; 
    [HideInInspector]
    public bool isConnected;

    public Collider2D pointCollider { private set; get; }
    public bool canConnect { private set; get; }
    
    private void Start()
    {
        pointCollider = GetComponent<Collider2D>();
    }

    private void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll == pointToConnet.pointCollider)
            canConnect = true;
    }

    private void OnTriggerExit2D(Collider2D coll)
    {
        if (coll == pointToConnet.pointCollider)
            canConnect = false;
    }
}
