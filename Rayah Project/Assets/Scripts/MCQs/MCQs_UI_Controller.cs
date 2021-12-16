using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class MCQs_UI_Controller : MonoBehaviour
{
    public Button nextButton, okButton, exitButton,claimButton;

    public GameObject settingPanel,introPanel,instruPanel;
    public GameObject coinPanel;
    public GameObject question2DPanel, question3DPanel,tryAgainPanel, rewardPanel,postTaskPanel;
    public GameObject[] optionButton;
    public static MCQs_UI_Controller instance;

    public TextMeshProUGUI coinText;

    public Sprite answer;

    public int coinNumber = 0;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        //coinText.text = coinNumber.ToString() + " Points";

        nextButton.onClick.AddListener(NextOnClick);
        okButton.onClick.AddListener(OKOnClick);
        exitButton.onClick.AddListener(ExitOnClick);
        claimButton.onClick.AddListener(ClaimOnClick);

        instruPanel.SetActive(false);
        coinPanel.SetActive(false);
        question2DPanel.SetActive(false);
        question3DPanel.SetActive(false);
        rewardPanel.SetActive(false);
        postTaskPanel.SetActive(false);

    }

    void NextOnClick()
    {
        instruPanel.SetActive(true);
        introPanel.SetActive(false);
        Debug.Log("You have clicked next button!");
    }

    void OKOnClick()
    {
        question2DPanel.SetActive(true);
        question3DPanel.SetActive(true);

        instruPanel.SetActive(false);
        settingPanel.SetActive(false);
        rewardPanel.SetActive(false);

        MCQs_Spawn_Manager.instance.generateQuestion();

        Debug.Log("You have clicked ok button!");
    }
    void ExitOnClick()
    {
        settingPanel.SetActive(true);
        question2DPanel.SetActive(false);
        question3DPanel.SetActive(false);
        tryAgainPanel.SetActive(false);
        Debug.Log("You have clicked exit button!");
    }

    void ClaimOnClick()
    {
        rewardPanel.SetActive(false);
        postTaskPanel.SetActive(true);
        coinPanel.SetActive(true);

        coinNumber = coinNumber + 10;
        coinText.text = coinNumber.ToString() + " Points";

        //Show Coin
        Debug.Log("You have clicked claim button!");
    }

    public void RightAnswer() //call by answer script
    {
        settingPanel.SetActive(true);
        rewardPanel.SetActive(true);
        question2DPanel.SetActive(false);
        question3DPanel.SetActive(false);
        Debug.Log("RightAnswer Trigger");
    }

    public void WrongAnswer() //call by answer script
    {
        tryAgainPanel.SetActive(true);
        Debug.Log("RightAnswer Trigger");
        foreach (GameObject go in optionButton)
        {
            go.GetComponent<Button>().interactable = false;
        }
        StartCoroutine(TryAgain());

    }

    public void MainMenu() // Go to Trigger Scene
    {
        SceneManager.LoadScene("QRCodeTrigger");
    }

    IEnumerator TryAgain()
    {

        yield return new WaitForSeconds(3);
        tryAgainPanel.SetActive(false);
        
        foreach(GameObject go in optionButton)
        {
            go.GetComponent<Button>().image.sprite = answer;
            go.GetComponent<Button>().interactable = true;
        }

        question2DPanel.SetActive(true);
    }

}
