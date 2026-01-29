/*
Yael Roque
CST 116 - Programming Concepts I
01/28/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void penniesPerDay();

int main() {
    
    penniesPerDay();

    return 0;
}

void penniesPerDay(){

    int days = 0;
    int pennies = 1;
    int total = 0;

    cout << "Please enter the amount of days you work: ";
    cin >> days;

    cout << "\nDay\tPennies Earned\tTotal Earned\n";
    cout << "-----------------------------------\n";

    for (int day = 1; day <= days; day++) {
        total = total + pennies; //adds and assigns pennies to total 
        cout << day << "\t" << pennies << "\t\t" << total << endl;
        cout << "-----------------------------------\n";
        pennies = pennies * 2; //multiplies and assigns pennies 
    }
}