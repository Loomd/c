// Aaron Hunter
// Unit 5 Programming Assignment 5 - Triangle
// Write a program that accepts three integer side lengths and uses a double-sided decision to report either that they do make a triangle or that they do not make a triangle.
// Test the program with 4, 6, and 5, then with 5, 3, and 1, then with 10, 15, and 20, and last with 10, 5, and 20.*/
#include<iostream>
using namespace std;

void myName() {
    printf("\nAaron Hunter\n");
}

int main () {

int sideOne, sideTwo, sideThree;

printf("Enter the length of side 1: ");
cin >> sideOne;
printf("Enter the length of side 2: ");
cin >> sideTwo;
printf("Enter the length of side 3: ");
cin >> sideThree;

myName();

if (sideOne + sideTwo > sideThree && sideOne + sideThree > sideTwo && sideTwo + sideThree > sideOne) {
    printf("The sides %d, %d, %d form a triangle.\n", sideOne, sideTwo, sideThree);
}
else {
    printf("The sides %d, %d, %d do not form a triangle.\n", sideOne, sideTwo, sideThree);
}

return 0;
}
