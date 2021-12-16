using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.SceneManagement;
using TMPro;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageTracking : MonoBehaviour
{

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnPrefabs = new Dictionary<string, GameObject>();
    private ARTrackedImageManager trackedImageManager;

    public string scenename;

    public GameObject mcqPanel;
    public GameObject findObjectPanel;

    public TextMeshProUGUI speedText;

    private void Awake()
    {
        trackedImageManager = FindObjectOfType<ARTrackedImageManager>();

        foreach(GameObject prefab in placeablePrefabs)
        {
            //Quaternion qCode = Quaternion.Euler(45,45,45);
            GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
            newPrefab.name = prefab.name;
            spawnPrefabs.Add(prefab.name, newPrefab);            
        }

        foreach (GameObject go in spawnPrefabs.Values)
        {
                go.SetActive(false);
            
        }


        speedText.text = "Debug Enable";
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += ImageChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= ImageChanged;
    }

    private void ImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach(ARTrackedImage trackedImage in eventArgs.added)
        {
            UpdateImage(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            UpdateImage(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed)
        {

            spawnPrefabs[trackedImage.name].SetActive(false);
            mcqPanel.SetActive(false);
            findObjectPanel.SetActive(false);
        }
    }

    GameObject prefab;

    private void UpdateImage(ARTrackedImage trackedImage)
    {
        string name = trackedImage.referenceImage.name;
        Vector3 position = trackedImage.transform.position;

        //GameObject 
        prefab = spawnPrefabs[name];
        prefab.transform.position = position;
        prefab.SetActive(true);

        foreach(GameObject go in spawnPrefabs.Values)
        {
            if(go.name != name)
            {
                go.SetActive(false);
            }
        }

        findObjectPanel.SetActive(false);
        mcqPanel.SetActive(false);

        if (prefab.name == "2_4MCQs")
        {

            speedText.text = "name == 2_4MCQs";
            scenename = "MCQs";
            mcqPanel.SetActive(true);
            trackedImageManager.enabled = false;
        }

        if (prefab.name == "2_3ObjectFindning")
        {

            speedText.text = "name == 2_3ObjectFindning";
            scenename = "2ObjectFindingTask";
            findObjectPanel.SetActive(true);
            //StartCoroutine(TriggerScene());
            trackedImageManager.enabled = false;
        }

    }

    public void CloseUI_ResumeImageTrack()
    {
        findObjectPanel.SetActive(false);
        mcqPanel.SetActive(false);
        trackedImageManager.enabled = true;
    }

    public void SceneChangeClick()
    {
        speedText.text = "ClickButton";
        StartCoroutine(TriggerScene());
    }

    IEnumerator TriggerScene()
    {
        speedText.text = "TriggerScene";
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene(scenename);
        speedText.text = "Trigger scenename";
    }

}
