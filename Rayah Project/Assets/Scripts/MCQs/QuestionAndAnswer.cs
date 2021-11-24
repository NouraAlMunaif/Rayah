using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class QuestionAndAnswer
{
    public int questionOrder;
    public string Question;
    public string[] Answer;
    public int correctAnswer;
    public bool isQuestioned = false;

    public QuestionAndAnswer(int qOrder, string q,string[] an, int correctAn)
    {
        this.questionOrder = qOrder;
        this.Question = q;
        this.Answer = an;
        this.correctAnswer = correctAn;

    }

}
