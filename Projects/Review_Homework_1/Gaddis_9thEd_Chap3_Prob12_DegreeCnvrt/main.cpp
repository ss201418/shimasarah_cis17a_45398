/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 9:40 PM
 * Purpose:  Currency Exchange Problem for Review Homework 1 
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
    float cDegree, //degrees value in Celsius 
            fDegree; //degrees value in Fahrenheit 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cin >> cDegree; //input value for degrees Celsius 
    fDegree = (9 * cDegree) / 5 + 32; //formula to convert Celsius to Fahrenheit 
    
    //Display the Inputs/Outputs 
    cout << fDegree; //output value for degrees Fahrenheit 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}