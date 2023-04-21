//Aaron Hunter
//Unit 7 Programming Assignment 2 - miles and kilometers
//Write a C++ program to convert kilometers to miles or miles to kilometers
#include<iostream>
#include<iomanip>
using namespace std;

// method prototypes
void menu(int&);
double getMiles(double&, int);
double getKilometers(double&, int);
double milesToKilos(double, double&, int);
double kilosToMiles(double, double&, int);
void outputMethod(double, double);

int main() {

    double miles, kilometers;
    int menuChoice;

        cout << fixed << setprecision(2);
        menu(menuChoice);
        miles = getMiles(miles, menuChoice);
        kilometers = getKilometers(kilometers, menuChoice);
        kilometers = milesToKilos(miles, kilometers, menuChoice);
        miles = kilosToMiles(kilometers, miles, menuChoice);
        outputMethod(miles, kilometers);
    return 0;
}

    void menu(int& menuChoice) {
        cout << "\n1- Convert miles to kilometers\n";
        cout << "2- Convert kilometers to miles\n";
        cout << "3- Exit\n";
        cout << "Choice: ";
        while(!(cin >> menuChoice) || menuChoice < 1 || menuChoice > 3){
            cout << "Error: Enter a number 1 - 3: ";
            cin.clear();
            cin.ignore(100,'\n');
        }
        if(menuChoice == 3){
            exit(0);
        }
        cin.ignore(100, '\n');
    }

    double getMiles(double& miles, int menuChoice){
        if(menuChoice == 1){
            cout << "\nEnter total miles: ";
            while(!(cin >> miles) || miles <= 0){
                cout << "Error: Enter a valid number: ";
                cin.clear();
                cin.ignore(100,'\n');
            }
        }
        return miles;
    }

    double getKilometers(double& kilometers, int menuChoice){
        if(menuChoice == 2){
            cout << "\nEnter total kilometers: ";
            while(!(cin >> kilometers) || kilometers <= 0){
                cout << "Error: Enter a valid number: ";
                cin.clear();
                cin.ignore(100,'\n');
            }
        }
        return kilometers;
    }

    double milesToKilos(double miles, double& kilometers, int menuChoice){
        double mileConversionRate = 1.60934;
        if(menuChoice == 1)
            kilometers = miles * mileConversionRate;
        return kilometers;
    }

    double kilosToMiles(double kilometers, double& miles, int menuChoice){
        double kiloConversionRate = .621371192;
        if(menuChoice == 2)
            miles = kilometers * kiloConversionRate;
        return miles;
    }

    void outputMethod(double miles, double kilometers){
            cout << endl << miles << " miles is equal to " << kilometers << " kilometers." << endl << endl;
    }