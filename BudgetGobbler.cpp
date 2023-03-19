#include <iostream>
#include <cmath>
#include <cstdlib>
#include "gob.h"
using namespace std;

int main() {

    double currentEth = 0;
    cout << "What is the current price of ETH?\n";
    cin >> currentEth;

    GobblerMenu menu("My Menu");
    menu.Display();


    int option;
    std::cin >> option;


    switch (option) {
    case 1:
        cout << "Sleep()" << endl;
        break;
    case 2:
        cout << "Groom()" << endl;
        break;
    case 3:
        cout << "Feedx1()" << endl;
        break;
    case 4:
        cout << "Feedx3()" << endl;
        break;
    case 5:
        cout << "Final/Exit page" << endl;
        break;
    default:
        cout << "Rekt.";
    }
    return 0;
};
