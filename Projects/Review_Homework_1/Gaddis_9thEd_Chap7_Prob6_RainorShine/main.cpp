/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 10:00 PM
 * Purpose:  Rain or Shine Problem for Review Homework 1 
 */

//System Libraries
#include <iostream> //I/O Library
#include <fstream>  //File Stream Library 
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 
const int ROWS = 3,    //30 rows for days of the month 
              CLMNS = 30; //3 columns for months of summer 
string options[ROWS] = {"Rainy", "Cloudy", "Sunny"}; //weather conditions 
string months[ROWS] = {"June", "July", "August"}; //months to track 
char letters[ROWS] = {'R', 'C', 'S'}; //labels for weather conditions 

void optInpt(char[][CLMNS], string);
void showMth(char[][CLMNS], int);
void showDay(char[][CLMNS], int);
void showRny(char[][CLMNS]);

//Execution of Code Begins Here
int main(int argc, char** argv) {    
    //Declare all variables for this function
    char types[ROWS][CLMNS]; //function call for weather conditions 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    optInpt(types, "RainOrShine.txt"); 

    for (int cnt = 0; cnt < ROWS; cnt++) 
        showDay(types, cnt); //function call for days 
    
    for (int i = 0; i < ROWS; i++) 
        showMth(types, i); //function call for months 

    showRny(types); //function call for rainiest month 
    
    //Display the Inputs/Outputs 
    cout << endl; 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
} 

void optInpt(char array[][CLMNS], string txtFile)
{ 
    ifstream inptFile;

    inptFile.open(txtFile);

    for(int row = 0; row < ROWS; row++) 
    { 
        for(int clm = 0; clm < CLMNS; clm++) 
            inptFile >> array[row][clm];
    } 

    inptFile.close();
} 

void showDay(char array[][CLMNS], int i)
{ 
    int total;
    for (int row = 0; row < ROWS; row++) 
    { 
        total = 0;
        for (int clm = 0; clm < CLMNS; clm++)
            if (array[row][clm] == letters[i]) { total++; } 
        
        //Output for days of each month with each weather condition 
        cout << "The total number of" << options[i] << " days for "; 
        cout << months[row] << " is " << total << " days." << endl; 
    } 
    cout << endl;
} 

void showMth(char array[ ][CLMNS], int i)
{
    int total = 0;
    for(int row = 0; row < ROWS; row++)
    {
        for(int clm = 0; clm < CLMNS; clm++)
            if(array[row][clm] == letters[i]) { total++; }
    } 
//Output for total number of days for each weather condition 
cout << "The total number of" << options[i] << " days for all months is "; 
cout << total << " days." << endl; 
}

void showRny(char array[][CLMNS])
{
    int sum;
    int ttlRain[ROWS];
    
    for (int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for (int clm = 0; clm < CLMNS; clm++)
            if (array[row][clm] == 'R') { sum++; }
            
        ttlRain[row] = sum;
    }

    cout << endl;


    int highRn = ttlRain[0];
    string hRnNm = months[0];

    for(int i = 1; i < ROWS; i++)
    {
        if(ttlRain[i] > highRn)
        {
            highRn = ttlRain[i];
            hRnNm = months[i];
        } 
        else if(ttlRain[i] == highRn)
        {
            highRn = ttlRain[i];
            hRnNm += ", ";
            hRnNm += months[i];
        } 
    }
    
    //Output for rainiest month 
    cout << hRnNm << " had the highest rainy days with "; 
    cout << "a total of " << hRnNm << " rainy days." << endl; 
} 