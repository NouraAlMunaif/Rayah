using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnedObject : MonoBehaviour
{
    SpawnedObjectManager spawnedObjectManager;
    ObjectFindingTaskUIManager uIManager;
    // Start is called before the first frame update
    void Start()
    {
        spawnedObjectManager = GameObject.Find("-SpawnedObjectManager").GetComponent<SpawnedObjectManager>();
        uIManager = GameObject.Find("UIManager").GetComponent<ObjectFindingTaskUIManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnMouseDown()
    {
        gameObject.SetActive(false);
        spawnedObjectManager.AddToFoundObject(gameObject.name);
        uIManager.DisplayObjectFoundUI(gameObject.name);
    }
}
