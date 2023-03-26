// Aaron Hunter
// Unit 5 Programming Assignment 7 - Airline Ticket Price
// Write a C++ program that accepts a ticket price and a child�s age from the user, then determines the discount and the discounted ticket price.
#include <iostream>
#include <iomanip>

using namespace std;

const double UNDER_2 = 1.0;
const double OLDER_2_YOUNGER_6 = 0.5;
const double OLDER_6_YOUNGER_12 = 0.2;
const double OLDER_12 = 0.0;

int main() {
    bool repeat;

    do {
        double ticketPrice = 0;
        double discountAmount = 0;
        double discountPrice = 0;
        double discount = 0;
        int childAge = 0;

        cout << "Enter ticket price: ";
        cin >> ticketPrice;

        if (ticketPrice <= 0) {
            cout << "ERROR_INVALID" << endl;
            return 0;
        }

        cout << "Enter child's age: ";
        cin >> childAge;

        if (childAge <= 0) {
            cout << "ERROR_INVALID" << endl;
            return 0;
        }
        else if (childAge < 2) {
            discount = UNDER_2;
        }
        else if (childAge < 6) {
            discount = OLDER_2_YOUNGER_6;
        }
        else if (childAge < 12) {
            discount = OLDER_6_YOUNGER_12;
        }

        discountAmount = ticketPrice * discount;
        discountPrice = ticketPrice * (1 - discount);

        cout << fixed << setprecision(2);
        printf("%-20s$%-7.2f\n", "Ticket Price:", ticketPrice);
        printf("%-20s%4d\n", "Customer Age:", childAge);
        printf("%-20s$%-7.2f\n", "Discount:", discountAmount);
        printf("%-20s$%-7.2f\n", "Discounted Price:", discountPrice);

        system("Pause");
        cout << "\nDo you want to run the program again? Enter 1 for Yes or 0 for No: ";
        cin >> repeat;
        cin.ignore();
    } while (repeat);

    return 0;
}
