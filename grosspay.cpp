//Aaron Hunter.
//Unit 7 Programming Assignment 1 - Gross Pay.
//Write a C++ program to calculate gross pay for any number of employees until a 0 is entered for the number of hours worked.
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

void getHoursWorked(double &, int);
void getHourlyPay(double &);
double calculateGrossPay(double, double, double);
void calcOvertimePay(double &, double, double);
void totalGrossPay(double&, double, double);

const int BUFFER_SIZE = 1000;
const int COLUMN_WIDTH = 15;

int main(){

    double hoursWorked, hourlyPay, grossPay, total, overtimePay = 0;
    int employee = 1;
    string outputString = "";
    char outBuffer[BUFFER_SIZE];

    snprintf(outBuffer, BUFFER_SIZE, "\n%-s%*s%*s%-s%*s%*s\n%s", "Hours", COLUMN_WIDTH, "Hourly", COLUMN_WIDTH, "Gross\n", "Worked", COLUMN_WIDTH-1, "Pay", COLUMN_WIDTH-1, "Pay", "______________________________________");
    outputString += outBuffer;

    do {

        getHoursWorked(hoursWorked, employee);
        if (hoursWorked == 0) {
            break;
        }

        getHourlyPay(hourlyPay);
        calcOvertimePay(overtimePay, hourlyPay, hoursWorked);
        grossPay = calculateGrossPay(hoursWorked, hourlyPay, overtimePay);
        totalGrossPay(total, grossPay, overtimePay);

        snprintf(outBuffer, BUFFER_SIZE, "\n%-.2f%*.2f%*.2f", hoursWorked, COLUMN_WIDTH, hourlyPay, COLUMN_WIDTH, grossPay);
        outputString += outBuffer;
        cout << outputString;;
        employee++;

  }while(true);

    snprintf(outBuffer, BUFFER_SIZE, "\n%s\n%-s%*.2f\n", "______________________________________", "Total Gross Pay: ", COLUMN_WIDTH + 3, total);
    outputString += outBuffer;
    cout << outputString;

    system("pause");
    return 0;

 }


void getHoursWorked(double& hoursWorked, int employee)
{
    cout << "\nEnter Hours worked for employee " << employee << ", or enter 0 if you wish to exit: ";
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
        overtimePay = (hoursWorked - 40) * (hourlyPay * 0.5);
    }
}


void totalGrossPay(double& total, double grossPay, double overtimePay)
{
    total += grossPay + overtimePay;
}


double calculateGrossPay(double hoursWorked, double hourlyPay, double overtimePay)
{
    double grossPay = (hoursWorked * hourlyPay) + overtimePay;
    return grossPay;
}
