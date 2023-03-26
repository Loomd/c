// Aaron Hunter
// Unit 3 Programming Assignment 3- Gazebo
// A program that calculates price and measurments for a company Gazebo.
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

void myName() {
	cout << "\nAaron Hunter\n\n";
}

int main() {


	double diameter, railingPerFoot, flooringPerSqFoot;
	double circumference = 0;
	double area = 0;
	double totalPriceFloor = 0;
	double totalPriceRail = 0;
	double radius = 0;

	cout << "Enter the Gazebo's diameter: ";
	cin >> diameter;
	cout << "Enter the price per foot for railing: ";
	cin >> railingPerFoot;
	cout << "Enter the price per square foot of flooring: ";
	cin >> flooringPerSqFoot;

	circumference = 2 * PI * (diameter / 2);
	radius = diameter / 2;
	area = PI * (pow(radius, 2.0));
	totalPriceFloor = flooringPerSqFoot * area;
	totalPriceRail = railingPerFoot * circumference;

	//use printf() to format the measurements with 1 decimal place and the costs with 2 decimal places

	myName();
	printf("Diameter:\t\t\t %.1f feet\n", diameter);
	printf("Circumference:\t\t\t %.1f feet\n", circumference);
	printf("Area:\t\t\t\t %.1f square feet\n\n", area);

	printf("Cost per square foot of tile:\t $%.2f\n", flooringPerSqFoot);
	printf("Cost per foot of railing:\t $%.2f\n", railingPerFoot);
	printf("Total cost of railing:\t\t $%.2f\n", totalPriceRail);
	printf("Total cost of flooring:\t\t $%.2f\n", totalPriceFloor);
	
	system("pause");
	return 0;
}
