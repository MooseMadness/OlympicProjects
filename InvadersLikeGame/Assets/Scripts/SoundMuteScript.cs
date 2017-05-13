using UnityEngine;
using UnityEngine.UI;

public class SoundMuteScript : MonoBehaviour
{
    public AudioSource audioSource;
    public Sprite soundOnSprite;
    public Sprite soundOffSprite;
    public Image soundButtonImg;

    public void ChangeSoundState()
    {
        audioSource.enabled = !audioSource.enabled;
        soundButtonImg.sprite = audioSource.enabled ? soundOnSprite : soundOffSprite;
    }
}