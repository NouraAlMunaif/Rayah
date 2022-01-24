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
    #region prefab method
    //[SerializeField]
    //GameObject SceneTagPrefab;
    //private GameObject[] placeablePrefabs;
    //private GameObject sceneTransitionPrefab;

    //private Dictionary<string, GameObject> spawnPrefabs = new Dictionary<string, GameObject>();
    //public GameObject mcqPanel;
    //public GameObject findObjectPanel;
    #endregion

    private ARTrackedImageManager trackedImageManager;

    string scenename;

    public GameObject codeInstructionPanel;
    public GameObject finishPanel;
    public TextMeshProUGUI finishText;
    public TextMeshProUGUI coinText;

    public TextMeshProUGUI speedText;
    public TextMeshProUGUI debugText;
 

    //List<int> taskNumber = new List<int>();
    int[] taskNumber = new int[7];
    private void Awake()
    {
        speedText.text = "Debug Enable from Image Tracking";
        trackedImageManager = FindObjectOfType<ARTrackedImageManager>();

        /*
        Task Order
        Task_i
        0 -> No Task
        1 -> Task_1 -> taskNumber[0]
        2 -> Task_2 -> taskNumber[1]
        ....
        */
        #region testing for task finish
        /*
        Task finish Int state
        0 -> Not Finish
        != 0 -> Finish
        2 -> Task_2 -> taskNumber[1]
        ....
        */

        //PlayerPrefs.SetInt("Task_0", 0);
        //PlayerPrefs.SetInt("Task_1", 0);
        //PlayerPrefs.SetInt("Task_2", 0);
        //switchText.text = "taskNumber.Length: " + taskNumber.Length;
        #endregion

        #region generate placeable prefabs for scenes transition and disable
        /*
        foreach (GameObject prefab in placeablePrefabs)
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
        */
        #endregion

        for (int i = 0; i < taskNumber.Length; i++)
        {
            string taskName = "Task_" + i;
            int taskValue = PlayerPrefs.GetInt(taskName, 0);
            //taskNumber.Add(taskValue);
            taskNumber[i] = taskValue;
        }
        debugText.text = "Task1 Complete State: " + taskNumber[0];
        #region generate scene transition prefab
        //SceneTagPrefab = Instantiate(sceneTransitionPrefab, Vector3.zero, Quaternion.identity);
        //SceneTagPrefab.SetActive(false);
        #endregion


    }

    private void Start()
    {
        coinText.text = PlayerData.score.ToString();
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
            //speedText.text = "ImageChanged Add: " + trackedImage.referenceImage.name;
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            UpdateImage(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed)
        {
            currentName = "Default";
            //spawnPrefabs[trackedImage.name].SetActive(false);
            //mcqPanel.SetActive(false);
            //findObjectPanel.SetActive(false);
        }
    }

    GameObject prefab;
    string nextQRSceneName;
    string currentName;

    private void UpdateImage(ARTrackedImage trackedImage)
    {
        //string name = trackedImage.referenceImage.name;
        string currentName = trackedImage.referenceImage.name;
        speedText.text = "ImageChanged Add: " + currentName;
        Vector3 position = trackedImage.transform.position;

        #region several prefab update on image
        /*
        //GameObject with different prefab
        prefab = spawnPrefabs[name];
        prefab.transform.position = position;
        prefab.SetActive(true);



        foreach (GameObject go in spawnPrefabs.Values)
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
        */
        #endregion

        #region one prefab change scene name
        /*
        //one prefab set true
        SceneTagPrefab.SetActive(true);
        SceneTagPrefab.transform.position = position;

        ChangeScene.instance.scenename = "";
        */
        #endregion


        #region no prefab only image name
        switch (currentName)
        {
            
            case "Task_1":// - Alqatt AR object finding

                //finishText.text = "Task_1 run if";
                if (taskNumber[0] != 1) // not finish task 1
                {
                    //Set level
                    PlayerData.ObjectFindingTaskLevel = 1;
                    scenename = "2ObjectFindingTask";
                    debugText.text = "Task1 Trigger: " + scenename;
                    StartCoroutine(TriggerScene());
                    print("Task 1");
                }
                else if(taskNumber[0] == 1)
                {
                    debugText.text = "Task1 Trigger: " + scenename;
                    FinishTask();
                    // finish task 1
                }
                break;
            case "Task_2":// - Wamdah AR object finding
                if (taskNumber[1] != 2) // not finish task 2
                {
                    //Set level
                    PlayerData.ObjectFindingTaskLevel = 2;
                    scenename = "2ObjectFindingTask"; //TODO: Need to change
                    StartCoroutine(TriggerScene());
                    print("Task 2");
                }
                else if (taskNumber[1] == 2)
                {
                    // finish task 2
                    FinishTask();
                }
                break;
            case "Task_3":// - CSP multi choice question
                if (taskNumber[2] != 3) // not finish task 3
                {
                    scenename = "Task3_MCQs";
                    StartCoroutine(TriggerScene());
                    print("Task 3");
                }
                else if (taskNumber[2] == 3)
                {
                    // finish task 3
                    FinishTask();
                }
                break;
            case "Task_4":// - CSP AR object finding
                if (taskNumber[3] != 4) // not finish task 4
                {
                    //Set level
                    PlayerData.ObjectFindingTaskLevel = 3;
                    scenename = "2ObjectFindingTask";//TODO: Need to change
                    StartCoroutine(TriggerScene());
                    print("Task 4");
                }
                else if (taskNumber[3] == 4)
                {
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_5":// - SoS AR object finding
                if (taskNumber[4] != 5) // not finish task 4
                {
                    //Set level
                    PlayerData.ObjectFindingTaskLevel = 4;
                    scenename = "2ObjectFindingTask";//TODO: Need to change
                    StartCoroutine(TriggerScene());
                    print("Task 5");
                }
                else if (taskNumber[4] == 5)
                {
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_6":// - AoR AR object finding
                if (taskNumber[5] != 6) // not finish task 4
                {
                    //Epmty for now thr three is not working
                    PlayerData.ObjectFindingTaskLevel = 5;
                    scenename = "2ObjectFindingTask";//TODO: Need to change
                    StartCoroutine(TriggerScene());
                    print("Task 6");
                }
                else if (taskNumber[5] == 6)
                {
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_7":// - Immersive tools multi choice question
                if (taskNumber[6] != 7) // not finish task 4
                {
                    scenename = "Task7_MCQs";
                    StartCoroutine(TriggerScene());
                    print("Task 7");
                }
                else if (taskNumber[6] == 7)
                {
                    // finish task 4
                    FinishTask();
                }
                break;
            default:
                print("Incorrect intelligence level.");
                break;
        }

        #endregion
    }

    public void CloseUI_ResumeImageTrack()
    {
        //findObjectPanel.SetActive(false);
        //mcqPanel.SetActive(false);
        trackedImageManager.enabled = true;
    }

    public void SceneChangeClick()
    {
        speedText.text = "ClickButton";
        StartCoroutine(TriggerScene());
    }

    public AudioClip scanClip;
    public AudioSource audioSource;
    public bool scaned;
    IEnumerator TriggerScene()
    {
        PlayScanAudio();
        codeInstructionPanel.SetActive(false);

        speedText.text = "TriggerScene: " + scenename;
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(scenename);
        
    }

    void FinishTask()
    {
        PlayScanAudio();
        finishPanel.SetActive(true);
        finishText.text = "You have already finish " + currentName + "." + "\n Find other task to experience.";
    }

    public void ScanAgainOnClick()
    {
        scaned = false;
        SceneManager.LoadScene("QRCodeTrigger");
    }

    public void PlayScanAudio()
    {
        if (!audioSource.isPlaying && !scaned)
        {
            audioSource.clip = scanClip;
            audioSource.Play();
            scaned = true;
        }
    }
}
