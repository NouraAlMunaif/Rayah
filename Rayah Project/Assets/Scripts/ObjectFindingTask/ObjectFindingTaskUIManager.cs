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
    [SerializeField] private Text taskCompleteText;
    [SerializeField] private Image robotImage;
    [SerializeField] private List<Sprite> robotImages;

    [Header("Game Manger")]
    [SerializeField] GameManager gameManager;

    [Header("Object Display Images")]
    [SerializeField] Sprite[] selectedObjectImage;

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
        robotImage.sprite = robotImages[PlayerData.characterNumber - 1];
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
        PlayerData.hasPlayerIntroGame = true;
        SceneManager.LoadScene("1MenuAR");
    }

    public void OnGameExitButtonClick()
    {
        SceneManager.LoadScene("QRCodeTrigger");
    }
    #endregion

    
    public void DisplayStartGameCanvas(bool show)
    {
        //startGameCanvas.SetActive(show);
        DisplayGameCanvas(true);
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
        switch (objectName)
        {
            case "ItheraBuilding":
                foundObjectImages[idx].sprite = selectedObjectImage[0];
                break;
            case "Vase":
                foundObjectImages[idx].sprite = selectedObjectImage[1];
                break;
            case "Basket":
                foundObjectImages[idx].sprite = selectedObjectImage[2];
                break;
            case "Grinder":
                foundObjectImages[idx].sprite = selectedObjectImage[3];
                break;
            case "Camera":
                foundObjectImages[idx].sprite = selectedObjectImage[4];
                break;
            case "Cube":
                foundObjectImages[idx].sprite = selectedObjectImage[5];
                break;
            case "Robot":
                foundObjectImages[idx].sprite = selectedObjectImage[6];
                break;
            case "Tree":
                foundObjectImages[idx].sprite = selectedObjectImage[7];
                break;
            default:
                break;
        }

        //foundObjectImages[idx].color = Color.green;
        idx++;
        if (idx == gameManager.complexityLevel) DisplayGameWin();
    }

    public void DisplayGameWin()
    {
        gameCanvas.SetActive(false);
        UpdateTaskCompletePanel();
        taskCompletedGameCanvas.SetActive(true);
    }

    public void UpdateTaskCompletePanel()
    {
        switch (PlayerData.ObjectFindingTaskLevel)
        {
            case 1:
                taskCompleteText.text = "Well done! you have gained 10 Points! Find the next QR code on this floor to start a task linked to the Wamdah VR experience.";
                break;
            case 2:
                taskCompleteText.text = "Well done! you have gained 10 Points! Head over to the QR code near the presentation area and take the next step on your journey with a task about the Creative Solutions Programme.";
                break;
            case 3:
                taskCompleteText.text = "Yay! You are getting closer. Head down the staris to the 3rd floor library where you can find a task based on 'The Story of Science'.";
                break;
            case 4:
                taskCompleteText.text = "Great job, Just few more steps to the end. You can discover the next part of your journey in the plaza on the ground floor.";
                break;
            case 5:
                taskCompleteText.text = "Well done you found all the trees. To complete your expereicne find the last QR code in the plaza and discover a task about your journey. ";
                break;
            default:
                break;
        }
    }

    public void OnTaskCompletedContinueButtonClick(){
        PlayerData.score += 10;
        gameManager.SetFinishedTaskStatus();

        if (PlayerData.ObjectFindingTaskLevel == 1)
        {
            //PlayerPrefs.SetInt("Task_1", 1);
            PlayerData.task1Finish = true;
        }
        if (PlayerData.ObjectFindingTaskLevel == 2)
        {
            PlayerData.task2Finish = true;
            //PlayerPrefs.SetInt("Task_2", 2);
        }
        if (PlayerData.ObjectFindingTaskLevel == 3)
        {
            PlayerData.task4Finish = true;
            //PlayerPrefs.SetInt("Task_4", 4);
        }
        if (PlayerData.ObjectFindingTaskLevel == 4)
        {
            PlayerData.task5Finish = true;
            //PlayerPrefs.SetInt("Task_5", 5);
        }
        if (PlayerData.ObjectFindingTaskLevel == 5)
        {
            PlayerData.task6Finish = true;
            //PlayerPrefs.SetInt("Task_6", 6);
        }

        SceneManager.LoadScene("QRCodeTrigger");
    }

    //For testing
    public void OnRestartButtonClick()
    {
        SceneManager.LoadScene("ObjectFindingTask");
    }
}
