#include <iostream>
#include <cmath>
using namespace std;

const double MONTHLY_FEE = 45.00;
const double GIGABYTE_FEE = 10.00;

int main()

{

double gigsUsed;
cout << "Enter the number of gigabytes used: ";
cin >> gigsUsed;

int fullGigabytesUsed = ceil(gigsUsed);
double bill = MONTHLY_FEE + (fullGigabytesUsed * GIGABYTE_FEE);
cout << "Gigabytes charged: " << fullGigabytesUsed << endl;
cout << "Total bill: $" << bill << endl;

return 0;

}
