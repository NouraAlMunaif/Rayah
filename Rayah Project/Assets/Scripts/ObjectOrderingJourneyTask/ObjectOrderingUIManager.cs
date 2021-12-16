using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ObjectOrderingUIManager : MonoBehaviour
{
    [SerializeField] GameObject introCanvas;
    [SerializeField] GameObject gameCanvas;
    [SerializeField] GameObject worldSpaceObject;
    [SerializeField] ObjectOrderGameManager objectOrderGameManager;
    [SerializeField] GameObject winPanel;
    [SerializeField] GameObject lostPanle;
    [SerializeField] GameObject tryOrderButton;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnStartButtonClick()
    {
        introCanvas.SetActive(false);
        gameCanvas.SetActive(true);
        worldSpaceObject.SetActive(true);
    }

    public void OnTryOrderButtonClick()
    {
        if (objectOrderGameManager.CheckButtonOrder())
        {
            //if Won
            tryOrderButton.SetActive(false);
            winPanel.SetActive(true);
        } else
        {
            //if lost
            tryOrderButton.SetActive(false);
            lostPanle.SetActive(true);
        }
    }

    public void OnTryAgainButtonClick()
    {
        SceneManager.LoadScene("ObjectOrderingJourneyTask");
    }
}
