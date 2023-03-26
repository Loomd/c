// Aaron Hunter
// Unit 6 Programming Assignment 3 - Car Rental.
// Write a program to calculate car rental cost for any number of customers.
#include <iostream>
#include <string>
using namespace std;
/*The user will enter the number of miles driven and the number of days the customer has rented the car (use int types).
The rental fee is $75/day if the car is rented for 3 days or less, and $85/day if the car is rented more than 3 days.
There is also an additional cost of 21 cents per mile driven (use a named constant).
Make the program end when zero is entered for the number of miles driven.*/
const int RENTAL_FEE_3_AND_LESS = 75;
const int RENTAL_FEE_MORE_3 = 85;
const double MILES_DRIVEN_FEE = .21;

int main () {

    // Variables.
    int milesDriven, daysRented;
    string outPut = "";
    char outBuffer [500];

    // Format column heading and underline in outBuffer. Next, add that to "outPut" string.
    sprintf_s(outBuffer, "%-15s%15s%15s%15s%15s\n", "Miles Driven", "Days Rented", "Rental Fee", "Milage Cost", "Total Cost");
    outPut = outPut + outBuffer +"____________________________________";



    cout << outPut << "\n\n";
    return 0;
}