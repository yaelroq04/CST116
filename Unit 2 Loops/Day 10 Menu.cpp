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
void factorial();
void additionTable();
void menuSelection();

int main() {
    
   menuSelection();

    return 0;
}

void menuSelection(){

    int select;

    cout << "1: Pennies Per Day\n2: Factorial\n3: Addition Table\n0: Exit\nEnter a number for menu selection: ";
    cin >> select;

    switch (select) {
        case 0:
        break;

        case 1:
            penniesPerDay();
        break;

        case 2:
            factorial();
        break;

        case 3:
            additionTable();
        break;
    }

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
        total = total + pennies;
        cout << day << "\t" << pennies << "\t\t" << total << endl;
        cout << "-----------------------------------\n";
        pennies = pennies * 2;
    }
}

void factorial(){

    int number;
    int result = 1;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        result = result * i;
    }

    cout << number << "! = " << result << endl;
}


void additionTable(){

    for (int row = 0; row <= 9; row++) {
        for (int col = 0; col <= 9; col++) {
            cout << row + col << "\t";
        }
        cout << endl;
    }
}


