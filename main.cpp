#include <iostream>
using namespace std;
// Name: <Chris Tomlinson>
// Assignment: <La
/*
 * Name: Chris Tomlinson
 * Assignment: Lab_1
 */

int main() {

    char unitFrom, unitTo;
    double tempFrom, tempTo;

    // ask user to get temperature input unit
    printf("Enter the temperature unit (C, F or K): ");
    cin >> unitFrom;

    // ask user to enter the temperature
    printf("Enter the temperature value you would like to convert: ");
    cin >> tempFrom;

    // ask user what temperature unit they want to convert to
    printf("Enter the temperature unit you want to convert into: ");
    cin >> unitTo;

    if (unitFrom == 'C') { // celsius to F or K conversion
        if (unitTo == 'F') {
            tempTo = (tempFrom * 9/5) + 32;
        } else if (unitTo == 'K') {
            tempTo = tempFrom + 273.15;
        } else {
            printf("Invalid temperature unit entered\n");
            return -1;
        }
    }

    else if (unitFrom == 'F') {// fahrenheit to C or K conversion
        if (unitTo == 'C'){
            tempTo = (tempFrom - 32) * 5/9;
        }
        if (unitTo == 'K') {
            tempTo = tempFrom * 5 / 9 + 459.67;
        }



    }

    else if (unitFrom == 'K') { // Kelvin to C or F conversion
        if (unitTo == 'C') {
            tempTo = tempFrom - 273.15;
        }

        if (unitTo = 'F') {
            tempTo = (tempFrom - 459.67) * 9 / 5;
        }

    }


         cout << "The temperature is: " << tempTo << unitTo << endl;
    // output the temperature
    return 0;


}
