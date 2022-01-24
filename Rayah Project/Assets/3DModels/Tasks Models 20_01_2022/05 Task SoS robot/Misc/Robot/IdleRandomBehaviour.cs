using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleRandomBehaviour : StateMachineBehaviour
{

    public int MaxIdleStates;

    public int IdleCount;

    public int CurrentCount;

    public int minimumIdleCount;

    public int MaxiumumIdleCount;



    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (CurrentCount < IdleCount)
        {
            animator.SetInteger("IdleInt", 0);
            CurrentCount++;

        }
        else
        {
            animator.SetInteger("IdleInt", Random.Range(1, MaxIdleStates + 1));
            CurrentCount = 0;
            SetIdleCount();

        }
    }





    public void SetIdleCount()
    {
        IdleCount = (Random.Range(minimumIdleCount, MaxiumumIdleCount));
    }

    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    //override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    
    //}



    // OnStateMove is called right after Animator.OnAnimatorMove()
    //override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that processes and affects root motion
    //}

    // OnStateIK is called right after Animator.OnAnimatorIK()
    //override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that sets up animation IK (inverse kinematics)
    //}
}
