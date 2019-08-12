// Matthew Young
// Temperature Conversion with txt file

/* Summary: This program is made to convert temperatures between
            Celius and Fahrenheit and output to a txt file. */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main() { // Beginning of Main Function

ofstream outFS; // Output file stream

double userTemp; // Variable for user inputed temperature. 
char userDegree; // Variable for user inputed degree type. 
double fahTemp;  // Variable for Farenheit temperature. 
double celTemp;  // Variable for Celsius temperature. 

    cout << "What Temperature do you want to convert? "; // Ask user for temperature. 
        cin >> userTemp;                                 // User inputed temperature. 
    
    cout << "Is this temperature Celsius (C) or Fahrenheit (F) ? "; // Ask user what temperature type.   
        cin >> userDegree;                                          // User inputed temperature type. 
        
    cout << " " << endl;
   
   
   outFS.open("Temp.txt");
   
   if (!outFS.is_open()) {
      cout << "Could not open file Temp.txt." << endl;
      return 1;
   }
   
   
   if (userDegree == 'C' || userDegree == 'c') {         // If statement for Celsius 
        
        fahTemp = ((userTemp * 9/5) +32);                    // Equation to convert Celsius to Fahrenheit. 
        
            outFS << "The temperature you entered is ";       // Tell user what they entered. 
            outFS << userTemp << " degrees Celsius." << endl; // Tell user what they entered.
            
            outFS << "The corresponding temperature in Fahrenheit is ";          // Tell user what new temperature is. 
            outFS << fixed << setprecision(2) << fahTemp << " degrees." << endl; // Set decimals and output converted temperature.
        
    }
    
    else if (userDegree == 'F' || userDegree == 'f') {    // Else if statement for Fahrenheit 
        
        celTemp = ((userTemp - 32) * 5/9);                  // Equation to convert Fahrenheit to Celsius.
        
            outFS << "The temperature you entered is ";          // Tell user what they entered.
            outFS << userTemp << " degrees Fahrenheit." << endl; // Tell user what they entered.
        
            outFS << "The corresponding temperature in Celsius is ";             // Tell user what new temperature is. 
            outFS << fixed << setprecision(2) << celTemp << " degrees." << endl; // Set decimals and output converted temperature.
    }
    
    else { 
            outFS << "C or F was not entered! No temperature was calculated!" << endl; // Else statement for wrong input. 
                                                                                  
        }
   
   
   outFS.close();
   
   return 0;
}
