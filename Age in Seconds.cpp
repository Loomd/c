//Aaron Hunter
//Unit 6 Programming Assignment 9 - Age in Seconds.
//Write a program that accepts a person’s s name and age in years, then prints the number of seconds the person has lived.
//Use a posttest loop to repeat this process until the user indicates there are no more cases to process
//Use another posttest loop to put an error trap around the age entry to be sure the user enters an age that is at least 0.
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const double SEC_IN_YEAR = 365*24*60*60;

int main(){

    string name;
    int age;
    double seconds;
    char repeatProgramIsEqualTo;

    do {
        cout << "Welcome to 'Age in Seconds' please enter the desired first and last name: ";
        getline(cin, name);
        cin.ignore(100,'\n');
        do {
            cout << "\nPlease enter desired years to be converted into seconds: ";
            cin >> age;
            }while(!(cin << age) || age < 0)
            cout << "\nWould you like to run another iteration of the program? (Y/N): ";
            cin >> repeatProgramIsEqualTo;
            toupper(repeatProgramIsEqualTo);
        }while(repeatProgramIsEqualTo == 'y' || repeatProgramIsEqualTo == 'Y');
}