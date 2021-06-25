/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 9:50 PM
 * Purpose:  Days in a Month Problem for Review Homework 1 
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
    int mthValu, //input value for a month 
         yrValue, //input value for a year 
         mthDays; //days in given month 
    bool yrLeap; //leap year 
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    cout << "Enter a month (1-12): " << endl; //prompt for month input value 
    cin >> mthValu; //input for month value 
    cout<< "Enter a year: " << endl; //prompt for year input value 
    cin >> yrValue; //input for year value 
    if (mthValu == 2) //determine leap year if month of February 
    { 
        if (yrValue % 100 == 0) //year value divisible by 100 
        { 
             yrValue % 400 == 0 ? yrLeap = true: yrLeap = false; //leap year if divisible by 400 
        } 
        else //year value not divisible by 100 
        { 
            yrValue % 4 == 0 ? yrLeap = true: yrLeap = false; //leap year if divisible by 4 
        } 
        yrLeap == true ? mthDays = 29: mthDays = 28; //29 days if leap year, else 28 days 
    } 
    else 
    { 
    mthValu == 1 ? mthDays = 31: // January has 31 days 
    mthValu == 3 ? mthDays = 31: // March has 31 days 
    mthValu == 4 ? mthDays = 30: // April has 30 days  
    mthValu == 5 ? mthDays = 31: // May has 31 days 
    mthValu == 6 ? mthDays = 30: // June has 30 days 
    mthValu == 7 ? mthDays = 31: // July has 31 days 
    mthValu == 8 ? mthDays = 31: // August has 31 days 
    mthValu == 9 ? mthDays = 30: // September has 30 days 
    mthValu == 10 ? mthDays = 31: // October has 31 days 
    mthValu == 11 ? mthDays = 30: // November has 30 days 
                           mthDays = 31; // December has 31 days 
    } 
    
    //Display the Inputs/Outputs     
    cout << mthDays << " days"; //output for days in a given month 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}