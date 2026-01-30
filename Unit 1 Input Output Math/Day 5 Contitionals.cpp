/*
Yael Roque
CST 116 - Programming Concepts I
1/13/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void fortuneTeller();

int main() {
    
    fortuneTeller();

}

void fortuneTeller(){

    int birthMonth = 0;
    int birthYear = 0;
    
    cout << "Please enter your birth month number (ex 1 - Jan, 2 - Feb, etc): ";
    cin >> birthMonth;
    cout << "Please enter your birth year: ";
    cin >> birthYear;

    int fortuneValue = (birthMonth + birthYear) % 4;

    switch (fortuneValue) {
        case 0:
            cout <<"Seek out a new enviroment if you're stuck in a nut.";
            break;
        
        case 1:
            cout <<"Your smile lights up someone else's day.";
            break;

        case 2:
            cout <<"Free your mind, and the rest will follow.";
            break;

        case 3:
            cout <<"Happiness may be right under your nose.";
            break;
    }
}