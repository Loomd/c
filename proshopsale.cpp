// Aaron Hunter
// Unit 5 Programming assignment 6 - Pro Shop Sale
// Write a program that accepts the item name, the original price of the item, whether it is already on sale (use a character variable and tell the user to enter Y or N),
// and if so, what percent it is currently marked down (it should only get this last input if the item is already on sale).
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double CURRENT_SALE = 0.1;

int main() {
	bool repeat;
	do {
		string itemName;
		char isOnSale;
		int price;
		int percentOff = 0;
		double answer;

		cout << fixed << setprecision(2);

		cout << "Enter item name: ";
		getline(cin, itemName);

		cout << "What was the original price of the item? ";
		cin >> price;

		if (price <= 0)
			cout << "INVALID_PRICE_CANNOT_BE_LESS_THAN_0";

		cout << "Is the item on sale? Enter Y or N: ";
		cin >> isOnSale;

		isOnSale = toupper(isOnSale);

		switch (isOnSale) {
		case 'Y':
			cout << "Enter the percent off: ";
			cin >> percentOff;

			if (percentOff >= 50) {
				answer = double(price) * (1 - (percentOff / 100.0)) * 0.6;
				cout << "\nitem = \"" << itemName << "\", price = " << price << ", onSale = " << isOnSale << ", percentOff = " << percentOff << ", Answer: " << answer << endl;
			}
			else if (percentOff >= 1) {
				answer = double(price) * (1 - (percentOff / 100.0)) * 0.7;
				cout << "\nitem = \"" << itemName << "\", price = " << price << ", onSale = " << isOnSale << ", percentOff = " << percentOff << ", Answer: " << answer << endl;
			}
			break;
		case 'N':
			cin.ignore();
			answer = double(price) * (1 - CURRENT_SALE);
			cout << "\nitem = \"" << itemName << "\", price = " << price << ", onSale = " << isOnSale << ", Answer: " << answer << endl;
			break;
		default:
			cout << "INVALID_ENTRY_";
			return 0;
		}
		system("Pause");
		cout << "Do you want to run the program again? Enter 1 for Yes or 0 for No: ";
		cin >> repeat;
		cin.ignore();
	} while (repeat);

	return 0;
}
