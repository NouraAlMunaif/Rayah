using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CornerMenuControl : MonoBehaviour
{
    public GameObject mapPanel;
    public GameObject learderboardPanel;
    public void JouneyMapOnClick()
    {
        mapPanel.SetActive(true);
    }

    public void LeaderboardOnClick()
    {
        learderboardPanel.SetActive(true);
    }

    public void MenuOnClick()
    {
        SceneManager.LoadScene("0Menu"); //You can restart your journey at any time via the menu.
    }

    public void PhotoModeOnClick()
    {
        SceneManager.LoadScene("Selfie");//Keep a memory from your journey by taking an example filtered selfie in the journey's theme.
    }
}
