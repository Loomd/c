//Aaron Hunter
//Unit 7 Programming Assignment 2 - miles and kilometers
//Write a C++ program to convert kilometers to miles or miles to kilometers
#include<iostream>
using namespace std;
//Use a pretest loop with a flag that ends the loop and program when the user enters 3 for the menu choice.
void menu(int&);
double getMiles(double, int);
double getKilometers(double, int);
double milesToKilos(double, double);//miles * 1.60934
double kilosToMiles(double, double);

int main() {

    double miles = 0, kilometers = 0;
    int menuChoice;

    menu(menuChoice);
    miles = getMiles(miles, menuChoice);
    kilometers = getKilometers(kilometers, menuChoice);
    cout << miles << endl;
    cout << kilometers;

}

void menu(int& menuChoice) {
    cout << "1- Convert miles to kilometers\n";
    cout << "2- Convert kilometers to miles\n";
    cout << "3- Exit\n";
    cout << "Choice: ";
    while(!(cin >> menuChoice) | menuChoice < 0 | menuChoice > 3){
        cout << "Error: Enter a number 1 - 3\n";
        cin.clear();
        cin.ignore(100,'\n');
        continue;
    }
}

double getMiles(double miles, int menuChoice){
    if(menuChoice == 1){
        cout << "\nEnter total miles: ";
        while(!(cin >> miles) | miles <= 0){
            cout << "Error: Enter a valid number: ";
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }
    }
    return miles;
}

double getKilometers(double kilometers, int menuChoice){
    if(menuChoice == 2){
        cout << "\nEnter total kilometers: ";
        while(!(cin >> kilometers) | kilometers <= 0){
            cout << "Error: Enter a valid number: ";
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }
    }
    return kilometers;
}