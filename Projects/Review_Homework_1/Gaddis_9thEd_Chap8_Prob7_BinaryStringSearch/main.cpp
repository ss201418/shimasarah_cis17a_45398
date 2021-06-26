/* 
 * File:   main.cpp
 * Author: Sarah Shima 
 * Created on June 22, 2021, 10:10 PM
 * Purpose:  Binary String Search Problem for Review Homework 1 
 */

//System Libraries
#include <iostream>  //I/O Library 
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 
void sortArr (string[ ], int); //function to sort string array 
int bSearch (string[ ], int, string); //function to search string array 

//Execution of Code Begins Here
int main(int argc, char** argv) {    
    //Declare all variables for this function
    const int NUM_NAMES = 20; 
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart" "Allen, Jim", 
                                                   "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                                                   "Taylor, Terri", "Johnson, Jill", 
                                                   "Allison, Jeff," "Looney, Joe", "Wolfe, Bill", 
                                                   "James, Jean", "Weaver, Jim", "Pore, Bob", 
                                                   "Rutherford, Greg", "Javens, Renee", 
                                                   "Harrison, Rose", "Setzer, Cathy", 
                                                   "Pike, Gordon", "Holland, Beth"  }; 
   string srchNm = "Griffin, Jim"; //string to search for in array  
   int result; //binary search result 
    
    //Insert your code to complete this program 
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    sortArr(names, NUM_NAMES); //function call for sorting array 
    result = bSearch(names, NUM_NAMES, srchNm); //function call for binary search 
   
    //Display the Inputs/Outputs 
    if (result == -1) //output if name found in the array 
        cout << "That name could not be found in the array." << endl;  
    else { //output if name not found in the array
    cout << "That name is located at element " << result; 
    cout << " in the array." << endl; 
    } 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
} 

void sortArr (string array[ ], int size) { 
    int minIndex; 
    string minValue; 
    
    for (int start = 0; start < (size - 1); start++) { 
        minIndex = start; 
        minValue = array[start]; 
        for (int index = start + 1; index < size; index++) { 
            if (array[index] < minValue) { 
                minValue = array[index]; 
                minIndex = index; 
            } 
        } 
        array[minIndex] = array[start]; 
        array[start] = minValue; 
    } 
} 

int bSearch(string array[ ], int size, string x) { 
    int first = 0,            //First array element 
         last = size - 1,   //Last array element 
         middle,             //Midpoint of search 
         position = -1;     //Position of search value 
    bool found = false; //Flag 
    
    while (!found && first <= last) { 
        middle = (first + last) / 2; //Calculate midpoint 
        if ((array[middle]) == x) {      //If value is found at mid 
            found = true; 
            position = middle; 
        } 
        else if (array[middle] > x ) //If value is in lower half 
            last = middle - 1; 
        else                                  //If value is in upper half 
            first = middle + 1; 
    } 
    return position; 
}  