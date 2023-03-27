// Aaron Hunter
// Unit 6 Programming Assignment 3 - Car Rental.
// Write a program to calculate car rental cost for any number of customers.
#include <iostream>
#include <string>
using namespace std;

// Constants.
const int RENTAL_FEE_3_DAYS_OR_LESS = 75;
const int RENTAL_FEE_MORE_THAN_3_DAYS = 85;
const int MINIMUM_DAYS_RENTED = 3;
const int FLAG = 0;
const double MILEAGE_COST_PER_MILE_DRIVEN = 0.21;

// Program steps.
int main () {

    // Variables.
    int milesDriven, daysRented;
    double mileageCost, totalCost;
    double rentalFee = 0;
    string outputString = "";
    char outBuffer [10000];

    // Format column heading in outBuffer. Next, add that to "outPut" string along with underline.
    sprintf(outBuffer, "%-15s%20s%20s%20s%20s\n", "Miles Driven", "Days Rented", "Rental Fee", "Mileage Cost", "Total Cost");
    outputString = outputString + outBuffer +"_______________________________________________________________________________________________";

    do {
        // Priming input.
        cout << "\nEnter the number of miles driven or enter 0 to quit: ";

        // Catching non-numerical input or negative values.
        while(!(cin >> milesDriven) || milesDriven < 0) {
            cout << "\nERROR: Invalid input. Please enter a non-negative integer for the number of miles driven. ";
            cin.clear();    // clears the error flag on cin.
            cin.ignore(10000,'\n');    // ignores 10000 characters(or until "\n").
            continue;
        }

        // If user entered 0, break out of loop
        if (milesDriven == FLAG) {
            break;
        }

        // Prompt user for the rest of necessary inputs.
        cout << "\nEnter the amount of days you rented the vehicle: ";

        // Catching non-numerical input or negative values.
        while(!(cin >> daysRented) || daysRented < 0) {
            cout << "\nERROR: Invalid input. Please enter a non-negative integer for the number of days rented. ";
            cin.clear();    // clears the error flag on cin.
            cin.ignore(10000,'\n');    // ignores 10000 characters(or until "\n").
            continue;
        }

        // Statements to account for rentalFee.
        if (daysRented < MINIMUM_DAYS_RENTED) {
            rentalFee = RENTAL_FEE_3_DAYS_OR_LESS * daysRented;
        } else {
            rentalFee = RENTAL_FEE_MORE_THAN_3_DAYS * daysRented;
        }

        // Calculations.
        mileageCost = milesDriven * MILEAGE_COST_PER_MILE_DRIVEN;
        totalCost = rentalFee + mileageCost;

        // Add calculations to outString via outBuffer.
        sprintf(outBuffer, "\n%7d%22d%25.2f%20.2f%20.2f", milesDriven, daysRented, rentalFee, mileageCost, totalCost);
        outputString += outBuffer;

    } while (milesDriven != FLAG); // End do-while loop.

    // Final output, table formatted.
    cout << "\n\n" << outputString << "\n\n";
}
