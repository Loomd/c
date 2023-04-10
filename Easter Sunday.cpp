// Aaron Hunter
// Unit 6 Programming Assignment 10 - Easter Sunday.
// write a program that accepts a value for year and determines the date for easter sunday that year.
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

int remainderA, remainderB , remainderC , remainderD, remainderE, day, year;
char yesOrNo = 'y';

cout << fixed << setprecision(0);

    do {

        cout << "\nEaster Sunday: enter a year (2000 or after): ";
            while(!(cin >> year) || year <= 2000) {
                cout << "\nInvalid input, enter a year 2000 or after: ";
            }

                remainderA = year % 19;
                remainderB = year % 4;
                remainderC = year % 7;
                remainderD = (19 * remainderA + 24) % 30;
                remainderE = (2 * remainderB + 4 * remainderC + 6 * remainderD + 5) % 7;
                day = (22.0 + remainderD) + remainderE;
                    if(day > 31.0){
                        cout << "\nIn the year " << year << " the date of Easter Sunday will be April " << (day - 31) << " " << year;
                    }
                    else {
                        cout << "\nIn the year " << year << " the date of Easter Sunday will be March " << day << ", " << year << "." << endl;
                    }
        cout << "\n\nWould you like to enter another year (Y/N): ";
        cin >> yesOrNo;
        yesOrNo = toupper(yesOrNo);
    } while(yesOrNo == 'Y');
}