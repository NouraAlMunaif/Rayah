using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class MenuARUIManager : MonoBehaviour
{
    [Header("Start Canvas")]
    [SerializeField] GameObject startCanvas;
    [SerializeField] GameObject welcomePanel;
    [SerializeField] GameObject warningPanel;
    [SerializeField] GameObject tasksPanel;
    [SerializeField] GameObject trialPanel;
    [SerializeField] Text infoText;

    [Header("Intro Canvas")]
    [SerializeField] GameObject introCanvas;
    [SerializeField] GameObject introMapPanel;
    [SerializeField] GameObject introLeaderbaordPanel;
    [SerializeField] GameObject introMenuPanel;
    [SerializeField] GameObject introPhotoModePanel;
    [SerializeField] GameObject introReadyPanel;
    [SerializeField] Image robotImage;
    [SerializeField] List<Sprite> robotImages;
    

    [Header("Game Canvas")]
    [SerializeField] GameObject gameCanvas;
    [SerializeField] GameObject leaderboardCanvas;
    [SerializeField] GameObject mapCanvas;
    [SerializeField] GameObject beaconImage;

    [Header("Task Canvas")]
    [SerializeField] GameObject taskCanvas;
    [SerializeField] GameObject characterSpeechHolder;
    [SerializeField] GameObject taskPopUpPanel;

    private void Awake()
    {
        infoText.text = "Hello " + PlayerPrefs.GetString("PlayerName") + ", Welcome to your journey in Rayah! \n You will be taken through many steps where you encounter tasks and collect points.\n Have Fun!";

        if (PlayerData.hasPlayerIntroGame == true)
        {
            startCanvas.SetActive(false);
            introCanvas.SetActive(true);
        }
    }

    #region Start Canvas
    public void OnWelcomePanelNextButtonClick()
    {
        welcomePanel.SetActive(false);
        warningPanel.SetActive(true);
    }


    public void OnWarningPanelNextButtonClick()
    {
        warningPanel.SetActive(false);
        tasksPanel.SetActive(true);
    }

    public void OnTasksPanelNextButtonClick(){
        tasksPanel.SetActive(false);
        trialPanel.SetActive(true);
    }

    public void OnStartTrialButtonClick()
    {
        //START TRIAL TASK HERE
        SceneManager.LoadScene("2ObjectFindingTask");
        //TEMP
        // startCanvas.SetActive(false);
        // introCanvas.SetActive(true);
    }

        public void OnSkipTrialButtonClick()
    {
        startCanvas.SetActive(false);
        introCanvas.SetActive(true);
    }
    #endregion

    #region Intro Canvas

    public void OnIntroMapPanelNextButtonClick(){
        introMapPanel.SetActive(false);
        introLeaderbaordPanel.SetActive(true);
    }

    public void OnIntroLeaderboardPanelNextButtonClick(){
        introLeaderbaordPanel.SetActive(false);
        introMenuPanel.SetActive(true);
    }

    public void OnIntroMenuNextButtonClick(){
        introMenuPanel.SetActive(false);
        introPhotoModePanel.SetActive(true);
    }

    public void OnIntroPhotoModeNextButtonClick(){
        introPhotoModePanel.SetActive(false);
        robotImage.sprite = robotImages[PlayerData.characterNumber - 1];
        introReadyPanel.SetActive(true);
    }

    public void OnIntroReadyPanelLetsGoButtonClick(){
        // introCanvas.SetActive(false);
        // gameCanvas.SetActive(true);

        //THIS FOR NOW NEED TO CHANGE LATER
        SceneManager.LoadScene("QRCodeTrigger");
    }
    #endregion

    #region  Game Canvas

    public void OnMapButtonClick()
    {
        gameCanvas.SetActive(false);
        leaderboardCanvas.SetActive(true);
    }

    public void OnLeaderboardButtonClick()
    {
        gameCanvas.SetActive(false);
        mapCanvas.SetActive(true);
    }

    public void OnBackToMenuButtonClick()
    {
        leaderboardCanvas.SetActive(false);
        mapCanvas.SetActive(false);
        gameCanvas.SetActive(true);
    }

    public void OnBeaconActivateTask(){
        gameCanvas.SetActive(false);
        DisplayTaskCanvas();
    }
    #endregion


    #region Task Canvas
    public void DisplayTaskCanvas(){
        characterSpeechHolder.SetActive(true);
        taskPopUpPanel.SetActive(false);
        taskCanvas.SetActive(true);
    }
    public void OnTaskGotItButtonClick(){
        characterSpeechHolder.SetActive(false);
        taskPopUpPanel.SetActive(true);
    }

    public void OnTaskExitButtonClick(){
        taskCanvas.SetActive(false);
        gameCanvas.SetActive(true);
    }
    #endregion
}
