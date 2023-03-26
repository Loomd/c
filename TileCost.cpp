/*Aaron Hunter
Compute the area of a rectangular room and the cost to purchase
tile for it*/

#include<iostream>
using namespace std;

int main()

{

//type declarations
double length;
double width;
double pricePerFoot;
double area;
double totalPrice;

//get input for length, width, and price per foot
cout << "Enter the length of the room: ";
cin >> length;
cout << "Enter the width of the room: ";
cin >> width;
cout << "Enter the price per foot of the tile: ";
cin >> pricePerFoot;

//calculate area and total price
area = length * width;
totalPrice = area * pricePerFoot;

//output
cout << endl << "Aaron Hunter" << endl << endl;
cout << "Length of room:         " << length << "ft" << endl;
cout << "Width of room:          " << width << "ft" << endl;
cout << "Price per square foot:  " << pricePerFoot << "sqft" << endl;
cout << "Area:                   " << area << endl;
cout << "Total price of tile:    " << totalPrice << endl<< endl;

system("pause");
return 0;

} //end main
