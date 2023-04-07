// Aaron Hunter
// Unit 6 Programming Assignment 8 - Air Conditioning.
// The cost of running an air conditioner depends on the temperature and humidity in the following way:
// Write a program that uses nested pretest loops (while or for) to print a table of costs.
// If your program is correct, you should find that at 80 degrees and 70 percent humidity, the cost is $2.55.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double cost;
    int temperature;

    cout << "Temperature\t\t\tHumidity\n";
    for (int humidity = 60; humidity <= 100; humidity += 10) {
        cout << setw(14) << humidity;
    }

    cout << "\n";

    for (temperature = 70; temperature <= 100; temperature += 10) {
        cout <<  "\n" << setw(5) << temperature;
        for (double humidity = 60; humidity <= 100; humidity += 10) {
            cost = 1.5 * (temperature - 68) / sqrt(120 - humidity);
            cout << setw(9) << "$" << fixed << setprecision(2) << cost;
        }
        cout << "\n";
    }

    return 0;
}