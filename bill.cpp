// psuedocode, program that determines monthly phone bill.
// add preprocessor directives. 
#include <iostream>
#include <istream>
using namespace std;

// create method, function
int main() {
	// Declare/intialize all const and variables
	const double MONTHLY_RATE = 45.00;
	const double GIGABYTE_RATE = 10.00;
	double gigs;
	cout << "How many Gigabytes did you use this month: " << endl;
	cin >> gigs;
	double totalBill = (MONTHLY_RATE + (GIGABYTE_RATE * gigs));
	cout << "Your total bill is: $" << totalBill << endl;
	cout << "Why? Because you used " << gigs << " gigabytes this month!" << endl;
	return 0;
}
