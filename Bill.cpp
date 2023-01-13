#include <iostream>
using namespace std ;

const double MONTHLY_FEE = 45.00 ;
const double GIGABYTE_FEE = 10.00 ;

int main () 

{

double gigsUsed ;

cout << "Enter number of Gigabytes used: " ;
cin >> gigsUsed ;

double billTotal = MONTHLY_FEE + (GIGABYTE_FEE * gigsUsed) ;

cout << "Congragulations you have a Total phone bill of: $" << billTotal << endl ;
cout << "Because you used: " << gigsUsed << " gigabytes this month." ;

}
