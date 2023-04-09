//Aaron Hunter
//Unit 6 Programming Assignment 9 - Age in Seconds.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

const long double SEC_IN_YEAR = 365.0 * 24 * 60 * 60;

int main() {
    string name = "";
    int age;
    long double seconds;
    char repeatProgramIsEqualTo = 'Y';

    do {
        cout << "Please enter the person's first and last name: ";
        getline(cin, name);
        cin.ignore();

        do {
            cout << "\nPlease enter the person's age in years (must be 0 or greater): ";
            cin >> age;
        } while (age < 0);

        seconds = age * SEC_IN_YEAR;
        cout << "\n" << name << " has lived approximately " << fixed << setprecision(0) << seconds << " seconds.\n\n";

        cout << "Do you want to run the program again? (Y/N): ";
        cin >> repeatProgramIsEqualTo;
        repeatProgramIsEqualTo = toupper(repeatProgramIsEqualTo);

        cin.ignore();
    } while (repeatProgramIsEqualTo == 'Y');

    return 0;
}
