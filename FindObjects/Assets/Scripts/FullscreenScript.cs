using UnityEngine;

public class FullscreenScript : MonoBehaviour
{
    public void ChangeScreenState()
    {
        Screen.fullScreen = !Screen.fullScreen;
    }
}
