//Aaron Hunter
//Unit 7 Programming Assignment 2 - miles and kilometers
//Write a C++ program to convert kilometers to miles or miles to kilometers
#include<iostream>
using namespace std;

// method prototypes
void menu(int&);
double getMiles(double, int);
double getKilometers(double, int);
double milesToKilos(double, double, int);
double kilosToMiles(double, double, int);
void outputMethod(double, double);

int main() {

    double miles, kilometers;
    int menuChoice;
    bool repeat = false;

        do // do-while loop incase of multiple conversions.
        {

            menu(menuChoice);
            miles = getMiles(miles, menuChoice);
            kilometers = getKilometers(kilometers, menuChoice);
            kilometers = milesToKilos(kilometers, miles, menuChoice);
            miles = kilosToMiles(miles, kilometers, menuChoice);
            outputMethod(miles, kilometers);

            system("Pause");
		    cout << "\nEnter 1 to Run again or Enter 0 to Quit: ";
                while(!(cin >> repeat) | repeat < 0 | repeat > 1){
                    cin.clear();
                    cin.ignore();
                }

	    }while(repeat);

	return 0;
}

        void menu(int& menuChoice) {
        cout << "\n1- Convert miles to kilometers\n";
        cout << "2- Convert kilometers to miles\n";
        cout << "3- Exit\n";
        cout << "Choice: ";
            while(!(cin >> menuChoice) | menuChoice < 0 | menuChoice > 3){
                cout << "Error: Enter a number 1 - 3: ";
                cin.clear();
                cin.ignore(100,'\n');
                continue;
            }
                while(menuChoice == 3){
                    abort();
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

    double milesToKilos( double kilometers, double miles, int menuChoice){
        double mileConversionRate = 1.60934;
        if(menuChoice == 1)
            kilometers = miles * mileConversionRate;
        return kilometers;
    }

    double kilosToMiles(double miles, double kilometers, int menuChoice){
        double kiloConversionRate = .621371192;
        if(menuChoice == 2)
            miles = kilometers * kiloConversionRate;
        return miles;
    }

    void outputMethod(double miles, double kilometers){
            cout << endl << miles << " miles is equal to " << kilometers << " kilometers." << endl << endl;
}