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
    [SerializeField] private GameObject winText;
    [SerializeField] private SpawnedObjectManager spawnedObjectManager;
    [SerializeField] List<Image> foundObjectImages;


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
        gameManager.DisplayPointerArrow(false);
        introTextUI.SetActive(false);
        trialExitButton.SetActive(false);
        trialTaskComplete.SetActive(true);
    }

    public void OnTriaTaskComepleteNextButtonClick()
    {
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

    public void DisplayGameWin()
    {
        winText.SetActive(true);
    }


    int idx = 0;
    public void DisplayObjectFoundUI(string objectName)
    {
        switch (objectName)
        {
            case "SphereRed":
                foundObjectImages[idx].color = Color.red;
                break;
            case "SphereBlue":
                foundObjectImages[idx].color = Color.blue;
                break;

            case "SphereGreen":
                foundObjectImages[idx].color = Color.green;
                break;
            default:
                break;
        }
        idx++;
        if (idx == foundObjectImages.Count) DisplayGameWin();
    }


    public void OnRestartButtonClick()
    {
        SceneManager.LoadScene("ObjectFindingTask");
    }
}
