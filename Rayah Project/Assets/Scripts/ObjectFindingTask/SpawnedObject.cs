using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ObjectFindingTask;

public class SpawnedObject : MonoBehaviour
{
    SpawnedObjectManager spawnedObjectManager;
    ObjectFindingTaskUIManager uIManager;
    GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        spawnedObjectManager = GameObject.Find("-SpawnedObjectManager").GetComponent<SpawnedObjectManager>();
        uIManager = GameObject.Find("UIManager").GetComponent<ObjectFindingTaskUIManager>();
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnMouseDown()
    {
        if (gameManager.isInstructionMode)
        {
            gameObject.SetActive(false);
            uIManager.DiplayTrialTaskComplete();
            PlayerData.score += 10;
        }
        else
        {
            gameObject.SetActive(false);
            spawnedObjectManager.AddToFoundObject(gameObject.name);
            uIManager.DisplayObjectFoundUI(gameObject.name);
        }

    }
}
