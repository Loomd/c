// Aaron Hunter
// Unit 6 Programming Assignment 5 - Quarterly Profit.
// Write a program that uses a counter-controlled while loop to allow the user to enter quarterly profit amounts.
#include<iostream>
#include<iomanip>
#include<sstream>   // Include string stream library for string manipulation.
using namespace std;

// Define constant SENTINEL_VALUE which corresponds to the number of quarters in a year.
const int SENTINEL_VALUE = 4;

int main() {

    // Initialize variables, and create a stringstream object for string manipulation.
    int quarter = 1; 
    double totalProfitAmount = 0.00;
    double quarterlyProfitAmount;
    stringstream outputMessage;

    // Loop begins, loops untill profit has been entered for four quarters.
    while(quarter <= SENTINEL_VALUE){

        // Prompt the user for quarterly profit, validate input.
        cout << "\nEnter the profit for quarter " << quarter << ": ";
        while(!(cin >> quarterlyProfitAmount) || quarterlyProfitAmount < 0){
            cout << "ERROR: please enter a non negative numerical value: ";
            cin.clear();
            cin.ignore();
            continue;
        }

        // Add quarterly profit to the total profit amount.
        totalProfitAmount += quarterlyProfitAmount;

        // Concatenate the quarter and profit amounts to the output message stringstream.
        outputMessage << "\nQuarter " << quarter << " Profit: $" << fixed << setprecision(2) << quarterlyProfitAmount << "\n";

        // Increment quarter counter.
        quarter++;
    }

    // Concatenate the total profit amount to the output message stringstream.
    outputMessage << "\nTotal Profit Amount: $" << fixed << setprecision(2) << totalProfitAmount << "\n";

    // Output the final message string from the stringstream object, returned 0 indicates success.
    cout << outputMessage.str();
    return 0;
}
