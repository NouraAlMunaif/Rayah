using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnedObjectManager : MonoBehaviour
{
    GameObject tempGameObject;
    List<string> foundObjectName = new List<string>(); 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void DisplaySpawnedObject(GameObject gameObject, bool show)
    {
        if(show == false)
        {
            gameObject.SetActive(show);
            tempGameObject = gameObject;
        } else
        {
            tempGameObject.SetActive(true);
        }
    }

    public void AddToFoundObject(string name)
    {
        foundObjectName.Add(name);
    }

}
