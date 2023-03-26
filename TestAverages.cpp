// Aaron Hunter.
// Unit 6 Programming Assignment 2 - Test Averages.
// Write a program that calculates and displays the average of two integer test scores for any number of students.
#include <iostream>
#include <string>
using namespace std;

// Constant(s).
const string SENTINAL_VALUE = "EOD";
const string SENTINAL_VALUE_LOWER = "eod";

int main() {

    // Variables.
    int score1, score2;
    double average = 0;
    string name = "";
    string outPutString = "";
    char outBuffer [500];

    // Add column headings and underline.
    sprintf_s(outBuffer, "\n\n%-15s%15s%15s%15s\n", "Student's Name", "Score 1", "Score 2", "Average");
    outPutString = outPutString + outBuffer + "____________________________________________________________\n";

    // Priming Input. Make end-user input uppercase just in case they can't read.
    cout << "Enter Student's name, or enter EOD to quit: ";
    getline(cin, name);

    // Make "eod" into the flag.
    if (name == SENTINAL_VALUE_LOWER){
        name = SENTINAL_VALUE;
    }

    // While loop start.
    while (name != SENTINAL_VALUE) {

        // Loop body, get score inputs.
        cout << "\nEnter the first test score: ";
        cin >> score1;
        cout << "\nEnter the second test score: ";
        cin >> score2;

        // Calculate Average.
        average = (double(score1) + double(score2)) / 2;

        // Format in outBuffer and add to outPutString.
        sprintf_s(outBuffer, "\n%-13s%15.1d%15.1d%15.1f\n", name.c_str(), score1, score2, average);
        outPutString += outBuffer;

        // Repeat priming input.
        cout << "\nEnter Student's name, or enter EOD to quit: ";
        cin.ignore();
        getline(cin, name);

        // make "eod" into the flag.
        if (name == SENTINAL_VALUE_LOWER) {
            name = SENTINAL_VALUE;
        }
    }

    // Output, table formated.
    cout << outPutString << "\n\n";
    return 0;
}