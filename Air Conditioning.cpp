// Aaron Hunter
// Unit 6 Programming Assignment 8 - Air Conditioning.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // declare variables
    double cost;
    int temperature;

    // format column headers
    cout << "Temperature\t\t\tHumidity\n";

    // print out humidity values
    for (int humidity = 60; humidity <= 100; humidity += 10) {
        cout << setw(14) << humidity;
    }

    // print new line character
    cout << "\n";

    // iterate over temperature values
    for (temperature = 70; temperature <= 100; temperature += 10) {
        // print temperature value
        cout <<  "\n" << setw(5) << temperature;

        // iterate over humidity values
        for (double humidity = 60; humidity <= 100; humidity += 10) {
            // calculate cost using the provided formula
            cost = 1.5 * (temperature - 68) / sqrt(120 - humidity);

            // format and print cost value
            cout << setw(9) << "$" << fixed << setprecision(2) << cost;
        }
        // print new line character after each row of humidity values
        cout << "\n";
    }

    return 0;
}
