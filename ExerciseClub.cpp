// Aaron Hunter
// Unit 5 Programming Assignment 4 - Exercise Club
// An exercise club charges $25 per month if you join for 12 months or less, and $22 per month if you join for more than 12 months.
// Write a program that accepts a length of membership (in whole months), determines the correct monthly fee, and calculates the total bill.
// Output the ***number of months, ***charge per month, and ***total bill. Remember to ***format money with a $ and 2 decimal places.
#include <iostream>
using namespace std;

const int LESS_THAN_YEAR = 25;
const int MORE_THAN_YEAR = 22;

void myName() {
    printf("\nAaron Hunter\n");
}

int main () {

int length = 0;
double totalBill;

printf("Enter length of membership in months (e.g. 1 or 13): ");
cin >> length;

if (length < 0) {
    cout << "INVALID_TRY_AGAIN";
    return 0;
}
else if (length < 12 && length > 0) {
    totalBill = length * LESS_THAN_YEAR;
}
else {
    totalBill = length * MORE_THAN_YEAR;
}

double decimalMonthlyCharge = totalBill / length;

myName();
printf("\nLength of your membership: %d months \nMonthly charge: $%.2f \nYour total bill: $%.2f\n", length, decimalMonthlyCharge, totalBill);

return 0;
}
