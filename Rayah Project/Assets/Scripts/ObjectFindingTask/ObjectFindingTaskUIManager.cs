using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ObjectFindingTask;
public class ObjectFindingTaskUIManager : MonoBehaviour
{
    [Header("Introduction Canvas")]
    [SerializeField] private GameObject introductionCanvas;
    [Header("Trial Task Canvas")]
    [SerializeField] GameObject trialTaskCanvas;
    [SerializeField] GameObject introTextUI;
    [SerializeField] GameObject trialExitButton;
    [SerializeField] GameObject trialTaskComplete;

    [Header("Game Canvas")]
    [SerializeField] private GameObject startGameCanvas;
    [SerializeField] private GameObject gameCanvas;
    [SerializeField] private SpawnedObjectManager spawnedObjectManager;
    [SerializeField] private GameObject content;
    [SerializeField] private List<Image> foundObjectImages;

    [Header("Task Completed Canvas")]
    [SerializeField] private GameObject taskCompletedGameCanvas;
    [SerializeField] private Image robotImage;
    [SerializeField] private List<Sprite> robotImages;

    [Header("Game Manger")]
    [SerializeField] private GameManager gameManager;

    #region Introduction Canvas
    public void DisplayIntroductionCanvas(bool show)
    {
        introductionCanvas.SetActive(show);
    }

    public void DisplayUIAfterIntro()
    {
        if (gameManager.isInstructionMode)
        {//when we are in instruction mode
            DisplayTrialTaskCanvas();
        }
        else
        {//when we are not in the instruction mode
            DisplayStartGameCanvas(true);
        }
    }
    #endregion

    #region Trial Canvas
    public void DisplayTrialTaskCanvas()
    {
        trialTaskCanvas.SetActive(true);
        gameManager.DisplayPointerArrow(true);
        //Display Spawn Object
        spawnedObjectManager.DisplaySpawnedObject(null, true);
    }

    public void DiplayTrialTaskComplete()
    {
        robotImage.sprite = robotImages[PlayerData.characterNumber];
        gameManager.DisplayPointerArrow(false);
        introTextUI.SetActive(false);
        trialExitButton.SetActive(false);
        trialTaskComplete.SetActive(true);
    }

    public void OnTriaTaskComepleteNextButtonClick()
    {
        PlayerData.hasPlayerIntroGame = true;
        SceneManager.LoadScene("1MenuAR");
    }

    public void OnTrialExitButtonClick()
    {
        //SceneManager.LoadScene("1MenuAR");
        
        SceneManager.LoadScene("QRCodeTrigger"); //Test for QR code Trigger, would be changed later
    }
    #endregion

    
    public void DisplayStartGameCanvas(bool show)
    {
        startGameCanvas.SetActive(show);
        GetNumberOfObjectsToFind();

    }

    public void GetNumberOfObjectsToFind(){
        foreach(var item in content.GetComponentsInChildren<Image>())
        {
            foundObjectImages.Add(item);
        }
    }

    public void DisplayGameCanvas(bool show)
    {

        spawnedObjectManager.DisplaySpawnedObject(null, true);
        if (gameManager.isInstructionMode == true)
        {
            gameManager.DisplayPointerArrow(true);
        }
        else
        {
            gameCanvas.SetActive(show);
        }
    }


    int idx = 0;
    public void DisplayObjectFoundUI(string objectName)
    {
        // switch (objectName)
        // {
        //     case "SphereRed":
        //         foundObjectImages[idx].color = Color.red;
        //         break;
        //     case "SphereBlue":
        //         foundObjectImages[idx].color = Color.blue;
        //         break;

        //     case "SphereGreen":
        //         foundObjectImages[idx].color = Color.green;
        //         break;
        //     default:
        //         break;
        // }
        foundObjectImages[idx].color = Color.green;
        idx++;
        if (idx == gameManager.complexityLevel) DisplayGameWin();
    }

    public void DisplayGameWin()
    {
        gameCanvas.SetActive(false);
        taskCompletedGameCanvas.SetActive(true);
    }

    public void OnTaskCompletedContinueButtonClick(){
        PlayerData.score += 10;
        gameManager.SetFinishedTaskStatus();
        SceneManager.LoadScene("QRCodeTrigger");
    }

    //For testing
    public void OnRestartButtonClick()
    {
        SceneManager.LoadScene("ObjectFindingTask");
    }
}
