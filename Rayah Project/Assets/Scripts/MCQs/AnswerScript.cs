using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnswerScript : MonoBehaviour
{
    public bool isCorrect =false;
    public MCQs_Spawn_Manager mcqManager;
    public Sprite wrong;

    public void Answer()
    {

        if (isCorrect)
        {
            Debug.Log("Correct Answer");

            mcqManager.QuestionedandCorrect();
            MCQs_UI_Controller.instance.RightAnswer();
            //mcqManager.Correct();
        }
        else
        {
            Debug.Log("Wrong Answer");

            gameObject.GetComponent<Button>().image.sprite = wrong;
            MCQs_UI_Controller.instance.WrongAnswer();
            //mcqManager.Correct();
        }
    }
}
