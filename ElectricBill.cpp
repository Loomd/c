// Aaron Hunter
// Unit 5 Programming Assignment 9 - Electric Bill
// Write a C++ program to get the amount of electricity used from the user (integer type) and calculate the customer’s bill.
#include <iostream>
#include <iomanip>       // for fixed << setprecision()
#include <cstdlib>       // for clearScreen()
using namespace std;

const double FLAT_RATE = 9.85;
const double LESS_90 = 0.15;
const double GREATER_90 = 0.18;
const int KWH_RANGE1 = 12;
const int KWH_RANGE2 = 78;
const int KWH_RANGE3 = 90;

// found a better way to implement clearing the terminal 

void clearScreen() {
#ifdef _WIN32             // checks if target OS is windows
	system("cls");
#else                     // for linux/unix
	system("clear");
#endif
}

int main()
{
	// add do-while loop to make testing easier overall

	bool repeat = false;
	do {
		clearScreen();
		int kwhAmount;
		double answer = 0;

		// prompt user for kwh usage

		cout << "Enter the amount of kwh used: ";
		cin >> kwhAmount;

		// Data validation

		if (cin.fail()) {
			cout << "\nError: kwh cannot be a non integer.\n";
			cout << "Enter 1 to restart or enter 0 to quit: ";
			cin >> repeat;
			cin.ignore();
			continue;
		}
		else if (kwhAmount <= 0) {
			cout << "\nError: kwh cannot be less than or equal to 0.\n";
			cout << "\nEnter 1 to restart or enter 0 to quit: ";
			cin >> repeat;
			cin.ignore();
			continue;
		}

		// calculate electricity bill, shifted from hard coding real numbers to using intialized variables for more flexibility

		if (kwhAmount <= KWH_RANGE1)
			answer = FLAT_RATE;
		else if (kwhAmount <= KWH_RANGE2)
			answer = FLAT_RATE + LESS_90 * (kwhAmount - KWH_RANGE1);
		else if (kwhAmount <= KWH_RANGE3)
			answer = FLAT_RATE + LESS_90 * KWH_RANGE2 + GREATER_90 * (kwhAmount - KWH_RANGE2);
		else if (kwhAmount > KWH_RANGE3)
			answer = FLAT_RATE + LESS_90 * KWH_RANGE2 + GREATER_90 * (kwhAmount - KWH_RANGE3);


		cout << fixed << setprecision(2);

		// ASCII graphics to add visual appeal to end user, aka less boring

		cout << " _________________________________\n";
		cout << "|                                 |\n";
		cout << "|          Electric Bill          |\n";
		cout << "|_________________________________|\n";
		cout << "|\t   KWH used: " << kwhAmount << "\t\t  |\n";
		cout << "|---------------------------------|\n";
		cout << "|\t   Bill: $" << answer << "\t\t  |\n";
		cout << " ---------------------------------\n\n";

		// application of the do-while loop, end user makes a choice to quit or rerun the program.

		system("Pause");
		cout << "\nEnter 1 to Run again or Enter 0 to Quit: ";
		cin >> repeat;
		cin.ignore();
	} while (repeat);
	return 0;
}
// I tried to add aditional error handling via another do-while loop and even attempted with an if else-if statement,
// incase the end user was to input a non numerical value (!=0 or !=1). I couldn't quite nail it down for this assignment. 
// I ran into a problem with an ifinite loop when I used continue; the subsequent code block from system("Pause") 
// I didn't document the issues well enough to give a better description. 