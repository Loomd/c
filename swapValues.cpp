// Aaron Hunter
// Unit 5 Programming Assignment 2 - Swap Values
// Write a program that accepts two real numbers in any order and divides the smaller one into the larger one. Use a single output statement that displays as follows:
// 25.4 divided by 6.9 equals 3.68
#include <iostream>

using namespace std;

int main() {

double num1, num2, temp, outPut;

printf("Enter the first number: ");
cin >> num1;
printf("\nEnter the second number: ");
cin >> num2;

if (num1 < num2) {
	temp = num1;
	num1 = num2;
	num2 = temp;
}
else {
	num1 = num1;
	num2 = num2;
}

outPut = num1 / num2;
printf("\n%.1f divided by %.1f equals %.2f", num1, num2, outPut);

return 0;
}
