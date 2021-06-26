/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 10:00 PM
 * Purpose:  Celsius Temperature Problem for Review Homework 1 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void celsius(float fDegree) { 
    float cDegree = ((fDegree - 32) * 5 / 9); //equation to convert degrees C to F 
    cout << setprecision(2) << fixed; //output formatting for decimal values 
    cout << setw(16) << fDegree << setw(15) << cDegree << endl; //output for degrees conversion 
} 

//Execution of Code Begins Here
int main(int argc, char** argv) {    
    //Declare all variables for this function
    float fDegree, //degrees Fahrenheit 
            cDegree; //degrees Celsius 
    
    //Initialize all known variables
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    cout << "Enter a degree in Fahrenheit: "; //prompt for degrees Fahrenheit 
    cin >> fDegree; //input for degrees Fahrenheit 
    cout << "The degree value has been converted "; //output for degrees conversion 
    cout << "from Fahrenheit to Celsius: " << endl; //output for degrees conversion 
    celsius(fDegree); //call for function celsius 
    cout << endl; //space between initial conversion and conversion table 
    cout << setw(30) << "Degree Conversion Table" << endl; //title of conversion table 
    cout << setw(16) << "Fahrenheit" << setw(15) << "Celsius" << endl; //column titles for conversion table 
    for (float cnt=0; cnt<=20; cnt++) { 
        fDegree=cnt; //set degrees F to count value 
        celsius(fDegree); //call for function celsius  
    } 
    
    //Display the Inputs/Outputs 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}