// A company wants a program that calculates weekly gross pay, amount of deductions, and net pay for an hourly worker. The user will enter the number 
// of hours worked for the week (allow partial hours) and the hourly pay rate. Use a named constant for a deduction rate of 27 percent. Output will be 
// the two input values, the gross pay, deduction amount, and net pay. Desk-check the process with hours worked = 35 and pay rate = 12.75.


// pseudocode: I need to create a program that does calculationsm, more specifically for weekly gross pay amount of deductions and netpay for 
// an employee that gets paid hourly. grossPay = hoursWorked times hourlyPay. deductions = grossPay times DEDUCTION_RATE. netPay = grossPay minus deductions.
// now that we have identified the equations we can declare and intialize our constant and variables. const DEDUCTION_RATE. double hoursWorkd, hourlyPay...
// grossPay, deductions, netPay. with everything declared and intialized we can prompt the user to input the values we need using keyword cout and have them input it 
// by using cin. logic looks like this: output to user; enter hours worked this week. ask for user input and store in hoursWorked.
// repeat the same steps for the hourlyPay. note: I will make sure to use floating-point data types to take account for partials. 
// next, I need to intialize the variables I will store equations in/will calculate my answers. 
// almost done here, I will output all required outputs. both input values, grossPay, deduction, netPay. 
// lastly, desk-check with provided inputs of hoursWorked = 35 and hourlyPay = 12.75.

#include <iostream>
using namespace std ;

const double DEDUCTION_RATE = 0.27 ;

int main() 

{

double hoursWorked, hourlyPay, grossPay, deductions, netPay ;

cout << "First enter your hours worked: " << endl ;
cin >> hoursWorked ;
cout << "Lastly enter your hourly pay: " << endl ;
cin >> hourlyPay ;

grossPay = (hoursWorked * hourlyPay) ;
deductions = (grossPay * DEDUCTION_RATE) ;
netPay = (grossPay - deductions) ;

cout << "Hours worked: " << hoursWorked << endl ;
cout << "Hourly pay: $" << hourlyPay << endl ;
cout << "Gross pay: $" << grossPay << endl ;
cout << "deductions: $" << deductions << endl ;
cout << "net Pay: $" << netPay << endl ;

return 0 ;

}
