/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 9:50 PM
 * Purpose:  Population Size Problem for Review Homework 1 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {    
    //Declare all variables for this function
    float strtNum, //starting number of organisms 
            pDayInc, //average daily population increase as a percentage 
            nForDay; //number of organisms for each day 
    int numDays; //number of days organisms multiplying 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    do { 
    cout << "Enter the initial number of organisms: "; //prompt for starting number 
    cin << strtNum; //input for starting number 
    cout << "Enter the average daily population increase (as a percentage): "; //prompt for population increase 
    cin << pDayInc; //input for daily population increase 
    cout << "Enter the number of days the organisms will multiply: "; //prompt for days of multiplication 
    cin << numDays; //input for number of days organisms multiplying 
    } while (strtNum < 2 || pDayInc < 0 || numDays < 1); //do-while loop for input validation 
        
    //Display the Inputs/Outputs 
    for (int dayCnt = 1; dayCnt <= numDays; dayCnt++) 
    { 
        dayCnt == 1 ? nForDay = strtNum: 
            nForDay = 
        strtNum + (strtNum * pDayInc)
        cout <<     ; //output for population size each day 
    }

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}