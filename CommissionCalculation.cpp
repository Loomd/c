// Aaron Hunter.
// Unit 6 Programming Assignment 1 - Commission Calculation.
// Write a program that calculates annual commission based on an annual sales amount entered by the user.
#include <iostream>
#include <iomanip>
using namespace std;

// Constants.
const int SENTINAL_VALUE = -1;
const int RANGE = 25000;
const double COMN_RATE1 = .1;
const double COMN_RATE2 = .15;

// Program goes here.
int main() {

	// Decleration/Intialization of variables.
	double sales, commission, commissionRate;
	double totalSales = 0;

	// Priming Input.
	cout << "Enter the amount of annual sales or enter -1 to quit: ";
	cin >> sales;

	// Loop until user enters sentinal value.
	while (sales != SENTINAL_VALUE) {
		if (sales < RANGE) {
			commissionRate = COMN_RATE1;
		}else {
			commissionRate = COMN_RATE2;
		}

		// calculate commission.
		commission = sales * commissionRate;

		// Output based upon instructions.
		cout << fixed << setprecision(2);
		cout << "\nSales: $" << sales << "\nCommission rate: " << commissionRate * 100 << "%\nCommission: $" << commission << "\n\n";

		// Repeat priming input.
		cout << "\nEnter the amount of annual sales or enter - 1 to quit: ";
		cin >> sales;
	}

	// Return 0 to indicate success.
	return 0;

	// End program.
}