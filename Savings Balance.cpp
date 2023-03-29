// Aaron Hunter
// Unit 6 Programming Assignment 4 - Savings Balance.
// Write a program to calculate the balance in a savings account that is compounded annually.
#include <iostream>
#include <string>
#include <cstdio> // content is stored as a C string in the buffer.
#include <cmath> // pow().
using namespace std;

// Constants.
const int COLUMN_WIDTH = 20;
const int MAX_YEARS = 10;
const double INTEREST_CONVERSION = 100;

int main (){

    // Variables.
    int time = 1;
    double balance;
    double principal;
    double interestRate, interestAmount;
    char outBuffer[1000];
    string outputString = "";

    // Format column headings in outBuffer and assign it to outputString.
    snprintf(outBuffer, sizeof(outBuffer), "%-*s%-*s%*s\n%s\n", COLUMN_WIDTH, "Year", COLUMN_WIDTH, "Interest", COLUMN_WIDTH, "Balance", "____________________________________________________________");
    outputString += outBuffer;

        // Asking user for inputs, catching negative or non-numerical values as errors.
        cout << "Enter your deposit amount: ";
        while(!(cin >> principal ||  principal < 0)) {
            cout << "\nERROR: Please enter a non-negative numerical value: ";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        cout << "\nEnter your annual interest rate: ";
        while(!(cin >> interestRate || interestRate < 0)) {
            cout << "\nERROR: Please enter a non-negative numerical value: ";
            cin.clear();
            cin.ignore(1000, 'n');
            continue;
        }

        // Starting balance is principal.
        balance = principal;

        // Convert interestRate to decimal.
        interestRate = interestRate / INTEREST_CONVERSION;

        interestAmount = principal * interestRate;

        // Calculations.
        while(time <= MAX_YEARS) {

            // pow(base,exponent).
            // A = P(1+r)^t
            balance = principal * pow((1 + interestRate), double(time));

            // Add variables to outBuffer, appends to string and time++.
            snprintf(outBuffer, sizeof(outBuffer), "\n%-*d%-*.2f%*.2f", COLUMN_WIDTH, time, COLUMN_WIDTH, interestAmount, COLUMN_WIDTH, balance);
            outputString += outBuffer;

            interestAmount = balance * interestRate;

            // Calculate the new balance.
            balance = balance + interestAmount;

            // Add one year to time.
            time++;
    }

    // Final output, table formatted.
    cout << outputString;
}