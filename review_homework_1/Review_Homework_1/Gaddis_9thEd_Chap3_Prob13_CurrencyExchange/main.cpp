/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 9:30 PM
 * Purpose:  Celsius to Fahrenheit Problem for Review Homework 1 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const float YEN_PER_DOLLAR = 98.93; //yen value per dollar 
const float EUROS_PER_DOLLAR = 0.74; //euro value per dollar 

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {    
    //Declare all variables for this function
    float dlrValu, //dollar value 
         yenValu, //yen value 
         euroVal; //euro value 
    
    //Initialize all known variables
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cin >> dlrValu; //input for dollar value 
    yenValu = dlrValu * YEN_PER_DOLLAR; //conversion dollar to yen 
    euroVal = dlrValu * EUROS_PER_DOLLAR; //conversion dollar to euro 
    
    //Display the Inputs/Outputs 
    cout << setprecision(2) << fixed; 
    cout << "Japanese Yen = " << yenValu << endl; 
    cout << "Euros = " << euroVal << endl; 

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}