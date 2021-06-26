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
            perInc, //avg. daily population inc. as a percentage 
            numInc, //avg. daily population inc. as an integer 
            nForDay; //number of organisms for each day 
    int numDays; //number of days organisms multiplying 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    do { 
    cout << "Enter the initial number of organisms: "; //prompt for starting number 
    cin >> strtNum; //input for starting number 
    cout << "Enter the average daily population increase (as a percentage): "; //prompt for population increase 
    cin >> numInc; //input for daily population increase in integer form 
    cout << "Enter the number of days the organisms will multiply: "; //prompt for days of multiplication 
    cin >> numDays; //input for number of days organisms multiplying 
    } while (strtNum < 2 || perInc < 0 || numDays < 1); //do-while loop for input validation 
    perInc = numInc / 100; //conversion pop. inc. integer to percentage 
        
    //Display the Inputs/Outputs 
    for (int dayCnt = 1; dayCnt <= numDays; dayCnt++) 
    { 
        nForDay = strtNum + (strtNum * (perInc * dayCnt)); //daily population size 
        cout << nForDay << endl; //output for daily population 
    }

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}