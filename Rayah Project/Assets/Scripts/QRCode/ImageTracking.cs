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

    public GameObject[] tasksText;

    [Header("UI")]
    [SerializeField] GameObject objectFindingTaskPopUp;
    [SerializeField] GameObject ObjectFindingStartGamePanel;
    [SerializeField] TextMeshProUGUI taskText_PreTask;
    [SerializeField] GameObject questionTaskPopUp;
    [SerializeField] GameObject questionStartGamePanel;
    [SerializeField] TextMeshProUGUI questionText_PreTask;
    bool FirstTrigger;

    //List<int> taskNumber = new List<int>();
    int[] taskNumber = new int[7];
    private void Awake()
    {

        //speedText.text = "Debug Enable from Image Tracking";
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
        if (!FirstTrigger)
        {
            //for (int i = 0; i < taskNumber.Length; i++)
            //{
            //    string taskName = "Task_" + i;
            //    PlayerPrefs.SetInt(taskName, 0);
            //    //taskNumber.Add(taskValue);

            //}


            FirstTrigger = true;
        }



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

        //for (int i = 0; i < taskNumber.Length; i++)
        //{
        //    string taskName = "Task_" + i;
        //    int taskValue = PlayerPrefs.GetInt(taskName);
        //    //taskNumber.Add(taskValue);
        //    taskNumber[i] = taskValue;
        //    debugText.text = "Task3 Inside: " + taskNumber[3];
        //}

        #region generate scene transition prefab
        //SceneTagPrefab = Instantiate(sceneTransitionPrefab, Vector3.zero, Quaternion.identity);
        //SceneTagPrefab.SetActive(false);
        #endregion

        //speedText.text = "Task3 Outside: " + taskNumber[3];
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

    public void StartObjectTask()
    {
        //Set level
        //scenename = "2ObjectFindingTask";
        debugText.text = "Task1 Trigger: " + scenename;
        SceneManager.LoadScene(scenename);
        //StartCoroutine(TriggerScene());
        print("Task");
    }

    void Scanned()
    {
        PlayScanAudio();
        codeInstructionPanel.SetActive(false);
    }

    private void UpdateImage(ARTrackedImage trackedImage)
    {
        //string name = trackedImage.referenceImage.name;
        string currentName = trackedImage.referenceImage.name;
        speedText.text = "ImageChanged Add: " + currentName;
        Vector3 position = trackedImage.transform.position;


        #region no prefab only image name

        /*
        switch (currentName)
        {
            
            case "Task_1":// - Alqatt AR object finding

                //finishText.text = "Task_1 run if";
                if (taskNumber[1] != 1) // not finish task 1
                {
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 1;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf==false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        taskText_PreTask.text = "Hope you enjoyed looking at Asir heritage, next challenge is about finding different objects related to Alqatt Alasiri.";
                        //ObjectFindingStartGamePanel 
                    }                   
                    //debugText.text = "Task1 Trigger: " + scenename;                   
                    print("Task 1");

                }
                else if(taskNumber[1] == 1)
                {
                    Scanned();
                    //debugText.text = "Task1 Trigger: " + scenename;
                    FinishTask();
                    // finish task 1
                }
                break;
            case "Task_2":// - Wamdah AR object finding
                if (taskNumber[2] != 2) // not finish task 2
                {
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 2;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        taskText_PreTask.text = "What a journey Odai had, huh? Try to to find the camera from his journey.";
                    }
                }
                else if (taskNumber[2] == 2)
                {
                    // finish task 2
                    Scanned();
                    FinishTask();
                }
                break;
            case "Task_3":// - CSP multi choice question
                if (taskNumber[3] != 3) // not finish task 3
                {
                    Scanned();
                    scenename = "Task3_MCQs";
                    StartCoroutine(TriggerScene());
                    print("Task 3");
                }
                else if (taskNumber[3] == 3)
                {
                    Scanned();
                    // finish task 3
                    FinishTask();
                }
                break;
            case "Task_4":// - CSP AR object finding
                if (taskNumber[4] != 4) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 3;
                    //}
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 3;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        taskText_PreTask.text = "Well, do you notice the Creative Solutions Program logo somewhere around you? Tap on it to collect it.";
                    }

                    ////Set level
                    //PlayerData.ObjectFindingTaskLevel = 3;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 4");
                }
                else if (taskNumber[4] == 4)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_5":// - SoS AR object finding
                if (taskNumber[5] != 5) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 4;
                    //}

                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 4;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        taskText_PreTask.text = "It is inspiring how human souls have always felt a sense of wonder and been insired by the love of knowledge.\n  'CHIP' has duplicated itself! Can you find all the versions and tap on them?";
                    }
                    //Set level
                    //PlayerData.ObjectFindingTaskLevel = 4;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 5");
                }
                else if (taskNumber[5] == 5)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_6":// - AoR AR object finding
                if (taskNumber[6] != 6) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 5;
                    //}
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 5;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        taskText_PreTask.text = "Did you enjoy the expereince of 'Anticipation of Rain'? It makes us consider nature and our place within it. Try and find all the trees around you.";
                    }
                    //Epmty for now thr three is not working
                    //PlayerData.ObjectFindingTaskLevel = 5;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 6");
                }
                else if (taskNumber[6] == 6)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_7":// - Immersive tools multi choice question
                if (taskNumber[7] != 7) // not finish task 4
                {
                    Scanned();
                    scenename = "Task7_MCQs";
                    StartCoroutine(TriggerScene());
                    print("Task 7");
                }
                else if (taskNumber[7] == 7)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            default:
                print("Incorrect intelligence level.");
                break;
        }
        */
        #endregion
        #region player data
        switch (currentName)
        {

            case "Task_2":// - Alqatt AR object finding 

                //finishText.text = "Task_1 run if";
                if (!PlayerData.task1Finish) // not finish task 1
                {
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 1;
                    debugText.text = "Task1 Trigger: " + scenename;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        tasksText[0].SetActive(true);
                        //taskText_PreTask.text = "Hope you enjoyed looking at Asir heritage, next challenge is about finding different objects related to Alqatt Alasiri.";
                    }
                        //ObjectFindingStartGamePanel 
                    //debugText.text = "Task1 Trigger: " + scenename;                   
                    //print("Task 1");

                }
                else if (PlayerData.task1Finish)
                {
                    Scanned();
                    //debugText.text = "Task1 Trigger: " + scenename;
                    FinishTask();
                    // finish task 1
                }
                break;
            case "Task_3":// - Wamdah AR object finding
                if (!PlayerData.task2Finish) // not finish task 2
                {
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 2;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        tasksText[1].SetActive(true);
                        //taskText_PreTask.text = "What a journey Odai had, huh? Try to to find the camera from his journey.";
                    }
                }
                else if (PlayerData.task2Finish)
                {
                    // finish task 2
                    Scanned();
                    FinishTask();
                }
                break;
            case "Task_1":// - CSP multi choice question
                if (!PlayerData.task3Finish) // not finish task 3
                {
                    Scanned();
                    scenename = "Task3_MCQs";
                    if (questionStartGamePanel.activeSelf == false && questionTaskPopUp.activeSelf == false)
                    {
                        questionTaskPopUp.SetActive(true);
                        tasksText[2].SetActive(true);
                        //questionText_PreTask.text = "I hope you enjoyed the presentations! Now let's see if you can answer this question right.";
                    }
                    //StartCoroutine(TriggerScene());
                    print("Task 3");
                }
                else if (PlayerData.task3Finish)
                {
                    Scanned();
                    // finish task 3
                    FinishTask();
                }
                break;
            case "Task_4":// - CSP AR object finding
                if (!PlayerData.task4Finish) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 3;
                    //}
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 3;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        tasksText[3].SetActive(true);
                        //taskText_PreTask.text = "Well, do you notice the Creative Solutions Program logo somewhere around you? Tap on it to collect it.";
                    }

                    ////Set level
                    //PlayerData.ObjectFindingTaskLevel = 3;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 4");
                }
                else if (PlayerData.task4Finish)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_5":// - SoS AR object finding
                if (!PlayerData.task5Finish) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 4;
                    //}

                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 4;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        tasksText[4].SetActive(true);
                        //taskText_PreTask.text = "It is inspiring how human souls have always felt a sense of wonder and been insired by the love of knowledge.\n  'CHIP' has duplicated itself! Can you find all the versions and tap on them?";
                    }
                    //Set level
                    //PlayerData.ObjectFindingTaskLevel = 4;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 5");
                }
                else if (PlayerData.task5Finish)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_6":// - AoR AR object finding
                if (!PlayerData.task6Finish) // not finish task 4
                {
                    //Scanned();
                    //if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    //{
                    //    objectFindingTaskPopUp.SetActive(true);
                    //    PlayerData.ObjectFindingTaskLevel = 5;
                    //}
                    Scanned();
                    scenename = "2ObjectFindingTask";
                    PlayerData.ObjectFindingTaskLevel = 5;
                    if (ObjectFindingStartGamePanel.activeSelf == false && objectFindingTaskPopUp.activeSelf == false)
                    {
                        objectFindingTaskPopUp.SetActive(true);
                        tasksText[5].SetActive(true);
                        //taskText_PreTask.text = "Did you enjoy the expereince of 'Anticipation of Rain'? It makes us consider nature and our place within it. Try and find all the trees around you.";
                    }
                    //Epmty for now thr three is not working
                    //PlayerData.ObjectFindingTaskLevel = 5;
                    //scenename = "2ObjectFindingTask";//TODO: Need to change
                    //StartCoroutine(TriggerScene());
                    //print("Task 6");
                }
                else if (PlayerData.task6Finish)
                {
                    Scanned();
                    // finish task 4
                    FinishTask();
                }
                break;
            case "Task_7":// - Immersive tools multi choice question
                if (!PlayerData.task7Finish) // not finish task 4
                {
                    Scanned();
                    scenename = "Task7_MCQs";
                    if (questionStartGamePanel.activeSelf == false && questionTaskPopUp.activeSelf == false)
                    {
                        questionTaskPopUp.SetActive(true);
                        tasksText[6].SetActive(true);
                        //questionText_PreTask.text = "Thank you for joining us in this journey, I hope you enjoyed expereincing it as much as we enjoyed making it! \n Please let us know what you think in the next question...";
                    }
                    //StartCoroutine(TriggerScene());
                    print("Task 7");
                }
                else if (PlayerData.task7Finish)
                {
                    Scanned();
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
        //PlayScanAudio();
        //codeInstructionPanel.SetActive(false);

        //speedText.text = "TriggerScene: " + scenename;
        yield return new WaitForSeconds(1);
        SceneManager.LoadScene(scenename);
        
    }

    void FinishTask()
    {
        speedText.text = "TriggerScene: Finish Task, " + scenename;
        //PlayScanAudio();
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
