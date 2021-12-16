using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MenuARUIManager : MonoBehaviour
{
    [Header("Start Canvas")]
    [SerializeField] GameObject startCanvas;
    [SerializeField] GameObject welcomePanel;
    [SerializeField] GameObject warningPanel;
    [SerializeField] GameObject trialPanel;

    [Header("Intro Canvas")]
    [SerializeField] GameObject introCanvas;
    [SerializeField] GameObject introMapPanel;
    [SerializeField] GameObject introLeaderbaordPanel;
    [SerializeField] GameObject introMenuPanel;
    [SerializeField] GameObject introPhotoModePanel;
    [SerializeField] GameObject introReadyPanel;

    [Header("Game Canvas")]
    [SerializeField] GameObject gameCanvas;
    [SerializeField] GameObject leaderboardCanvas;
    [SerializeField] GameObject mapCanvas;
    [SerializeField] GameObject beaconImage;

    [Header("Task Canvas")]
    [SerializeField] GameObject taskCanvas;
    [SerializeField] GameObject characterSpeechHolder;
    [SerializeField] GameObject taskPopUpPanel;

    #region Start Canvas
    public void OnWelcomePanelNextButtonClick()
    {
        welcomePanel.SetActive(false);
        warningPanel.SetActive(true);
    }


    public void OnWarningPanelNextButtonClick()
    {
        warningPanel.SetActive(false);
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
