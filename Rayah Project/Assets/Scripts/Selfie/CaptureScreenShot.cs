using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CaptureScreenShot : MonoBehaviour
{

    void Start()
    {
        
    }

    bool text;
    void Update()
    {
        if (text)
        {
            StartCoroutine(SaveUI());
        }
        
    }

    public GameObject UI;
    public GameObject save;

    private IEnumerator Screenshot()
    {
        yield return new WaitForEndOfFrame();
        Texture2D texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

        texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        texture.Apply();

        string name = "Screenshot_Rayah" + System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".png";

        NativeGallery.SaveImageToGallery(texture, "Rayah app pictures", name);
        UI.SetActive(true);
        
    }

    public void TakeScreenShot()
    {
        UI.SetActive(false);
        text = true;
        StartCoroutine(Screenshot());
    }

    private IEnumerator SaveUI()
    {
        save.SetActive(true);
        yield return new WaitForSeconds(3);
        save.SetActive(false);
        text = false;
    }

    public void BackOnClick()
    {
        SceneManager.LoadScene("QRCodeTrigger");
    }

}
