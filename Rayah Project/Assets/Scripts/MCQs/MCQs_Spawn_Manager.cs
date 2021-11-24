using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

//[System.Serializable]
public class MCQs_Spawn_Manager : MonoBehaviour
{

    public List<QuestionAndAnswer> QnA = new List<QuestionAndAnswer>();
    
    public GameObject[] options;
    public int currentQuestion;

    public int i_blueToothTrigger=0;

    public TextMeshProUGUI questionText;
    public static MCQs_Spawn_Manager instance;

    //QuestionAndAnswer q1 = new QuestionAndAnswer(1, "How many Projects were presented today?", new string[] { "7", "2", "5" }, 3);
    //QuestionAndAnswer q2 = new QuestionAndAnswer(2, "Multiple Choice Questions Example 1", new string[] { "a", "b", "c" }, 1);
    //QuestionAndAnswer q3 = new QuestionAndAnswer(3, "Multiple Choice Questions Example 2", new string[] { "e", "d", "f" }, 2);


    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        //generateQuestion();

       //switch (i_blueToothTrigger)
       //{
       //     case 0:
       //         Debug.Log("already answered this question");
       //         break;
       //     case 1:
       //         QnA.Add(q1);
       //         break;
       //     case 2:
       //         QnA.Add(q2);
       //         break;
       //     case 3:
       //         QnA.Add(q3);
       //         break;
       // }
        


        //m_Object.text = "Enter Your Text Here";
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            //Correct();
        }
        if (Input.GetKeyDown(KeyCode.O))
        {
            i_blueToothTrigger = 2;
            generateQuestion();
        }
    }

    public void generateQuestion()
    {
        currentQuestion = i_blueToothTrigger;

        Debug.Log("i_blueToothTrigger" + i_blueToothTrigger);
        //currentQuestion = QnA[currentQuestion].questionOrder;
        if (QnA[currentQuestion].isQuestioned == false)
        {
            questionText.text = QnA[currentQuestion].Question;
            Debug.Log("current question:"+currentQuestion + questionText.text);
            SetAnswer();
        }
        else
        {
            Debug.Log("This question has been answered");
        }


  
    }

    void SetAnswer()
    {
        for(int i = 0; i < options.Length; i++)
        {
            options[i].GetComponent<AnswerScript>().isCorrect = false;
            options[i].transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = QnA[currentQuestion].Answer[i];
       
            if(QnA[currentQuestion].correctAnswer == i + 1)
            {
                //Debug.Log("current correct answer" + QnA[currentQuestion].correctAnswer + i);
                options[i].GetComponent<AnswerScript>().isCorrect = true;
            }
        }
     }

    public void QuestionedandCorrect()
    {

        //QnA.RemoveAt(currentQuestion);
        Debug.Log("check debug");
        QnA[currentQuestion].isQuestioned = true;
        
        //generateQuestion();

    }
}
