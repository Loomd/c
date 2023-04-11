//Aaron Hunter.
//Unit 7 Programming Assignment 1 - Gross Pay.
//Write a C++ program to calculate gross pay for any number of employees until a 0 is entered for the number of hours worked.
//Also calculate and display the total gross pay.
/*Method to calculate the gross pay.
This method should use a single-sided decision to add(+) over-time-pay equal(==) to half(.5) of the hourly pay-rate multiplied(*) by hours-worked over(/) 40.*/
#include<iostream>
using namespace std;

void getHoursWorked(double &, int);
void getHourlyPay(double &);
double calculateGrossPay(double, double);
void calcOvertimePay(double &, double, double);

int main(){

    double hoursWorked, hourlyPay, grossPay, overtimePay = 0;
    int employee = 1;

    do {

        getHoursWorked(hoursWorked, employee);

        if (hoursWorked == 0) {
            break;
        }

        getHourlyPay(hourlyPay);
        grossPay = calculateGrossPay(hoursWorked, hourlyPay);
        calcOvertimePay(overtimePay, hourlyPay, hoursWorked);

        cout << "\nHours Worked: " << hoursWorked << " hrs";
        cout << "\nHourly Pay: $" << hourlyPay;
        cout << "\nGross Pay: $" << grossPay;
        cout << "\nOvertime Pay: $" << overtimePay << endl;

        employee++;

  }while (true);

    system("pause");
    return 0;
 }

void getHoursWorked(double& hoursWorked, int employee)
{
    cout << "\nEnter Hours worked for employee " << employee << " (enter 0 if you wish to exit): ";
    while(!(cin >> hoursWorked) || hoursWorked < 0 ){
        cout << "\nError, value entered was less than 0. Enter a value greater then 0: ";
        cin.clear();
        cin.ignore(100,'\n');
        continue;
    }
}

void getHourlyPay(double& hourlyPay)
{
    cout << "\nEnter hourly pay: ";
    while(!(cin >> hourlyPay) || hourlyPay < 0){
        cout << "\nError, value entered was less then 0. Enter a value greater then 0: ";
        cin.clear();
        cin.ignore(100,'\n');
        continue;
    }
}

 void calcOvertimePay(double& overtimePay, double hourlyPay, double hoursWorked)
 {
    if(hoursWorked > 40){
        overtimePay = (hoursWorked - 40) * hourlyPay * 0.5;
    }
}

double calculateGrossPay(double hourlyPay, double hoursWorked)
{
    double grossPay = hoursWorked * hourlyPay;
    return grossPay;
}