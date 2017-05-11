using UnityEngine;

[ExecuteInEditMode]
public class PresetPuzzleScript : MonoBehaviour
{
    public SinglePuzzleScript[] puzzles;
    public int height;
    public int width;

    public void PresetPuzzle()
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                GameObject parrent = new GameObject("Piece" + (i * width + j), typeof(PuzzlePieceScript));
                parrent.transform.position = puzzles[i * width + j].transform.position;
                puzzles[i * width + j].transform.SetParent(parrent.transform);

                puzzles[i * width + j].puzzleConnections = new PuzzleConnectionScript[4];
                puzzles[i * width + j].offsets = new Vector3[4];

                if (i != 0)
                {
                    GameObject topConn = new GameObject("TopConPoint", typeof(BoxCollider2D), typeof(PuzzleConnectionScript));
                    topConn.transform.position = puzzles[i * width + j].transform.position;
                    topConn.transform.SetParent(puzzles[i * width + j].transform);
                    topConn.GetComponent<BoxCollider2D>().isTrigger = true;
                    PuzzleConnectionScript topConnScript = topConn.GetComponent<PuzzleConnectionScript>();
                    topConnScript.pointToConnet = puzzles[(i - 1) * width + j].puzzleConnections[2];
                    puzzles[(i - 1) * width + j].puzzleConnections[2].pointToConnet = topConnScript;
                    puzzles[i * width + j].puzzleConnections[0] = topConnScript;

                    puzzles[i * width + j].offsets[0] = puzzles[(i - 1) * width + j].transform.position - puzzles[i * width + j].transform.position;
                    puzzles[(i - 1) * width + j].offsets[2] = puzzles[i * width + j].transform.position - puzzles[(i - 1) * width + j].transform.position;
                }

                if(j != width - 1)
                {
                    GameObject rightConn = new GameObject("RightConPoint", typeof(BoxCollider2D), typeof(PuzzleConnectionScript));
                    rightConn.transform.position = puzzles[i * width + j].transform.position;
                    rightConn.transform.SetParent(puzzles[i * width + j].transform);
                    rightConn.GetComponent<BoxCollider2D>().isTrigger = true;
                    puzzles[i * width + j].puzzleConnections[1] = rightConn.GetComponent<PuzzleConnectionScript>();
                }

                if(i != height - 1)
                {
                    GameObject bottomConn = new GameObject("BottomConPoint", typeof(BoxCollider2D), typeof(PuzzleConnectionScript));
                    bottomConn.transform.position = puzzles[i * width + j].transform.position;
                    bottomConn.transform.SetParent(puzzles[i * width + j].transform);
                    bottomConn.GetComponent<BoxCollider2D>().isTrigger = true;
                    puzzles[i * width + j].puzzleConnections[2] = bottomConn.GetComponent<PuzzleConnectionScript>();
                }

                if(j != 0)
                {
                    GameObject leftConn = new GameObject("LeftConPoint", typeof(BoxCollider2D), typeof(PuzzleConnectionScript));
                    leftConn.transform.position = puzzles[i * width + j].transform.position;
                    leftConn.transform.SetParent(puzzles[i * width + j].transform);
                    leftConn.GetComponent<BoxCollider2D>().isTrigger = true;
                    PuzzleConnectionScript leftConnScript = leftConn.GetComponent<PuzzleConnectionScript>();
                    leftConnScript.pointToConnet = puzzles[i * width + j - 1].puzzleConnections[1];
                    puzzles[i * width + j - 1].puzzleConnections[1].pointToConnet = leftConnScript;
                    puzzles[i * width + j].puzzleConnections[3] = leftConnScript;

                    puzzles[i * width + j].offsets[3] = puzzles[i * width + j - 1].transform.position - puzzles[i * width + j].transform.position;
                    puzzles[i * width + j - 1].offsets[1] = puzzles[i * width + j].transform.position - puzzles[i * width + j - 1].transform.position;
                }
            }
        }
    }
}
