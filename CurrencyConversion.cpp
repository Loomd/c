// Aaron Hunter
// Unit 5 Programming Assignment 8 - Currency Conversion
// Write a program that converts U.S. dollars to a different currency. 
#include <iostream>
#include <iomanip>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

void myName() {
	cout << "\n\tCreated by: Aaron Hunter\n";
}

const double EURO = .757;
const double JAPANESE_YEN = 80.92;
const double MEXICAN_PESO = 13.1544;
const double BRITISH_POUND = .6178;

int main() 
{
	bool repeat = false;
	do {

		string country;
		int americanDollars = 0;
		int menu = 0;
		double answer = 0;

	#ifdef __linux__        
		system("clear");
	#elif _WIN32
		system("cls");
	#endif

		cout << "Enter the American dollar amount you would like to convert: ";
		cin >> americanDollars;

		if (americanDollars <= 0)
		{
			cout << "\n\nYou entered " << americanDollars << " American dollars. Dollars can't be less then or equal to 0 " << endl;
			cout << "\nEnter 1 to run again, enter 0 to quit: ";
			cin >> repeat;
			cin.ignore();
			continue;
		}

		cout << "\n====================================\n";
		cout << "||      Currency Exchange Menu    ||\n";
		cout << "====================================\n";

		cout << "\n1) Euros";
		cout << "\n2) Japanese yen";
		cout << "\n3) Mexican peso";
		cout << "\n4) British pound\n";
		cout << "\nEnter the number corresponding to the currency you wish to convert to: ";
		cin >> menu;

		cout << fixed << setprecision(3);

		switch (menu)
		{
		case 1: answer = double(americanDollars) * EURO;
			country = "Euros";
			break;
		case 2: answer = double(americanDollars) * JAPANESE_YEN;
			country = "Japanese yen";
			break;
		case 3: answer = double(americanDollars) * MEXICAN_PESO;
			country = "Mexican pesos";
			break;
		case 4: answer = double(americanDollars) * BRITISH_POUND;
			country = "British pounds";
			break;
		default:
			if (menu > 4) {
				cout << "\n\nError: Invalid selection, enter 1, 2, 3, or 4 next time\n";
				cout << "\nEnter 1 to run again, enter 0 to quit: ";
				cin >> repeat;
				cin.ignore();
				continue;
			}
		}

		cout << "\n$" << americanDollars << " American dollars equals " << answer << " " << country << endl << endl;
		myName();

		system("Pause");
		cout << "Enter 1 to run again, enter 0 to quit: ";
		cin >> repeat;
		cin.ignore();
	} while (repeat);

	return 0;
}
