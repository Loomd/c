// Aaron Hunter
// Unit 6 Programming Assignment 6 - Double Money.
// You have a business deal that doubles your money each month, you start with $1.
// Write a program using a while loop to determine how many months it will take for your money to grow to more than $1000.
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

const int COLUMN_WIDTH = 10;
const int SENTINEL_VALUE = 1000;
const double DOUBLE = 2.0;

int main (){

    int month = 1;
    double balance = 1.0;
    string outputString = "";
    char outBuffer[1000];

    snprintf(outBuffer, sizeof(outBuffer), "%-*s%*s\n%s", COLUMN_WIDTH, "Month", COLUMN_WIDTH+5, "Balance", "____________________________");
    outputString += outBuffer;
    
    while(balance < SENTINEL_VALUE ){

        balance *= DOUBLE;

        snprintf(outBuffer, sizeof(outBuffer), "\n%-*d%*s%.2f", COLUMN_WIDTH, month, COLUMN_WIDTH, "$", balance);
        outputString += outBuffer;

        month++;
    }

    cout << outputString;
    return 0;
}