using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class AllRightAnswer : MonoBehaviour
{
    public GameObject introPanel;
    public GameObject rewardPanel;
    public GameObject questionPanel;
    public GameObject answersPanel;
    public GameObject menuPanel;
    public TextMeshProUGUI coinText;


    private void Start()
    {
        coinText.text = PlayerData.score.ToString();
        menuPanel.SetActive(false);
    }
    public void RightAnswerOnClick()
    {
        PlayerPrefs.SetInt("Task_7", 7);
        menuPanel.SetActive(true);
        rewardPanel.SetActive(true);
        answersPanel.SetActive(false);
        questionPanel.SetActive(false);
        PlayerData.score += 10;
        coinText.text = PlayerData.score.ToString();

    }

    public void IntroNextOnClick()
    {
        introPanel.SetActive(false);
        answersPanel.SetActive(true);
        questionPanel.SetActive(true);
        menuPanel.SetActive(false);
    }

    public void CloseOnClick()
    {
        SceneManager.LoadScene("QRCodeTrigger");
        //introPanel.SetActive(true);
        //answersPanel.SetActive(false);
        //questionPanel.SetActive(false);
        //menuPanel.SetActive(true);
    }

    public void finishTask7()
    {
        //PlayerPrefs.SetInt("Task_7", 7);
        PlayerData.task7Finish = true;
    }

}
