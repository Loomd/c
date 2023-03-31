// Aaron Hunter
// Unit 6 Programming Assignment 7 - Bakery Cost List.
// This program generates a table of costs for bakery rolls, from 1 to 12 rolls.
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// Constants, used to avoid "magic numbers" in the code.
const double ROLLS_RATE = 0.35;
const int BUFFER_SIZE = 1000;
const int COLUMN_WIDTH = 15;
const int MAX_ROLL_AMOUNT = 12;

int main() {

    // Declaration of variables.
    double totalCost;
    string outputString = "";
    char outBuffer[BUFFER_SIZE];

    // Format the column headers, columns, and underline.
    snprintf(outBuffer, BUFFER_SIZE, "%-*s%*s\n%s", COLUMN_WIDTH, "Number of rolls", COLUMN_WIDTH+5, "Total Cost", "___________________________________");
    outputString += outBuffer;

    // Beginning of For loop, iterate from 1 to 12 rolls and calculate its cost.
    for (int rolls = 1; rolls <= MAX_ROLL_AMOUNT; rolls++) {

        // Calculate totalCost of rolls per each iteration.
        totalCost = rolls * ROLLS_RATE;

        // Format calculation and rolls into table format. Add that to the outputString.
        snprintf(outBuffer, BUFFER_SIZE, "\n%-*d%*s%.2f", COLUMN_WIDTH, rolls, COLUMN_WIDTH, "$", totalCost);
        outputString += outBuffer;
}

// Output, in table format.
cout << outputString;
}