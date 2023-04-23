//Aaron Hunter
//Unit 7 Programming Assignment 3 - Reward Points
//Write a program that takes a users monthly purchases and converts it into reward points (based on the card type/membership)
#include<iostream>
#include<string>
#include <cstdio>
using namespace std;

double getPurchaseAmnt(double);
void displayMenu();
int getType();
double calcPoints(int, double);

const int STREAM_SIZE = 1000;
const int COLUMN_WIDTH = 15;

int main(){

    // Variables
    double purchaseAmnt;
    int rewardPoints, memChoice;
    char outBuffer[STREAM_SIZE];
    string outputString = "";

    // Add headers to output string
    snprintf(outBuffer, sizeof(outBuffer), "\n%-s%*s%*s\n%-s%*s%*s\n%s\n", "Membership", COLUMN_WIDTH, "Monthly", (COLUMN_WIDTH+2), "Reward", "Type", (COLUMN_WIDTH+8), "Purchases", COLUMN_WIDTH, "points", "__________________________________________" );
    outputString += outBuffer;
    while(true){
        purchaseAmnt = getPurchaseAmnt(purchaseAmnt);
            if(purchaseAmnt == 0){
                break;
            }
        memChoice = getType();
        rewardPoints = calcPoints(memChoice, purchaseAmnt);
        //The ternary operator selects appropriate string based upon value of memChoice.
        snprintf(outBuffer, sizeof(outBuffer), "\n%-*s%*.2f%*.0d\n", COLUMN_WIDTH, (memChoice == 1) ? "Premium" : (memChoice == 2) ? "Plus" : "Standard", (COLUMN_WIDTH-5), purchaseAmnt, COLUMN_WIDTH, rewardPoints);
        outputString += outBuffer;
    }
    cout << outputString;
}
// Prompts the user to enter a valid monthly purchase amount and returns it
double getPurchaseAmnt(double purchaseAmnt){
    cout << "Enter your monthly purchase amount (enter 0 to exit): ";
        while(!(cin >> purchaseAmnt) || purchaseAmnt < 0){
            cout << "Error: please enter a valid purchase amount: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
    return purchaseAmnt;
}

void displayMenu(){
    cout << "Membership Types:\n\n" << "1. Premium\n" << "2. Plus\n" << "3. Standard\n\n" << "Enter choice (1, 2, or 3): ";
}
// calls displayMenu() and returns the user's choice
int getType() {
    displayMenu();
    int memChoice;
        while (!(cin >> memChoice) || memChoice < 1 || memChoice > 3) {
            cout << "Error: please enter a valid choice (1-3): ";
            cin.clear();
            cin.ignore(100, '\n');
        }
    return memChoice;
}
// Calculates the reward points based on the user's membership type and monthly purchase amount
double calcPoints(int memChoice, double purchaseAmnt){
    int rewardPoints;
    switch (memChoice) {
        case 1:
            rewardPoints = int(purchaseAmnt / 100) * 3;
            break;
        case 2:
            rewardPoints = int(purchaseAmnt / 100) * 2;
            break;
        default:
            rewardPoints = int(purchaseAmnt / 100);
            break;
        }
    return rewardPoints;
}