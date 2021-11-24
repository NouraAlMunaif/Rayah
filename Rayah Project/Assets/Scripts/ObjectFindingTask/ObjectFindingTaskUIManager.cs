using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ObjectFindingTaskUIManager : MonoBehaviour
{
    [SerializeField] private GameObject introductionCanvas;
    [SerializeField] private GameObject startGameCanvas;
    [SerializeField] private GameObject gameCanvas;
    [SerializeField] private GameObject winText;
    [SerializeField] private SpawnedObjectManager spawnedObjectManager;
    [SerializeField] List<Image> foundObjectImages;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void DisplayIntroductionCanvas(bool show)
    {
        introductionCanvas.SetActive(show);
    }

    public void DisplayStartGameCanvas(bool show)
    {
        startGameCanvas.SetActive(show);
    }

    public void DisplayGameCanvas(bool show)
    {
        gameCanvas.SetActive(show);
        spawnedObjectManager.DisplaySpawnedObject(null, true);
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
