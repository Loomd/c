// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
// #include statement allows me to refrence code from c++ standard library

#include <iostream>

// going to include the calculator.h file to our preprocessor directive.
// remember since its not a standard lib we put the file in "".

#include "Calculator.h"

// using namespace std; tells the compiler to expect stuff from the c++ standard library to be used
// using statement is added to make the code look cleaner.

using namespace std;

// all c++ statements must end with a semicolon and all c++ applications must contain
// a main() function. This function is what the program runs at the start. All code must
// be accessible from main() in order to be used.

int main()

// code goes in between curly braces. 

{

// declare and intialize variables for program 

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

// the cout keyword tells the computer to output and the << operator tells the 
// compiler to send whatever is to the right of it. 

    cout << "Calculator Console Application" << endl << endl;

// the endl keyword is similar to the enter key; it ends the line and moves the 
// next line. Note: it is a better practice to use \n to end lines, as endl always 
// flushes the buffer and can hurt performance.

    cout << "Please enter the operation to preform. Format: a+b | a-b | a*b | a/b"
        << endl;

// program will return 0 if ran correctly.

    return 0;

// close face curly brace! ends the program.

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
