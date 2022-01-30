using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerData{
    /*
    characterNumber
    0 -> No selection
    1 -> Black 
    2 -> Red
    3 -> Blue
    */
    public static int characterNumber = 0;

    /*
    ObjectFindingTaskLevel
    0 -> Instruction level (A trial challenge with 1 object (ithra building)
    1 -> Alqatt AR object finding with 3 objects (basket / grinder / vase)
    */
    public static int ObjectFindingTaskLevel = 0;

    public static bool hasPlayerIntroGame = false;

    /*
    player score
    */
    public static int score = 0;

    public static bool task1Finish;
    public static bool task2Finish;
    public static bool task3Finish;
    public static bool task4Finish;
    public static bool task5Finish;
    public static bool task6Finish;
    public static bool task7Finish;
}
