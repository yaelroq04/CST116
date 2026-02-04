// Midterm1Practice.cpp : Directions(2 pts for Q1, 2 pts for Q2, 1 pt for Q3)
//1. Two angles are supplementary if their sum is 180. Prompt the user to enter
//the first angle.
//You may assume that the first angle is valid. Then prompt the user to enter the
//supplementary
//angle until the user enters a valid supplementary angle. Finally report if the
//supplementary
//angle(second angle entered) is acute(less than 90 degrees) or obtuse(more than 90
//degrees). Good luck!
//2. Prompt the user to enter a value n.
//Then print the first n square numbers.
//Example: Prompt the user to enter n.
//The user enters 5. Print
// 1 4 9 16 25
//3. Answer the following questions.
//3a. What is an infinite loop?
// a condition that loops forever since there is no condition met
//3b. What is the only difference between c/c++ related to loops?
// you can't declare a variable in the initialize step of the for loop before C99
//3c. Describe how you would use the debugger.
// i would stop it at a specific line, and examine variables to locate errors.

#include <iostream>
using namespace std;

void angles();
void squareNumbers();

int main()
{
    angles();
    squareNumbers();
}

void angles(){

    int firstAngle;
    int secondAngle;

    cout << "Enter the first angle: ";
    cin >> firstAngle;

    cout << "Enter the supplementary angle: ";
    cin >> secondAngle;

    while (firstAngle + secondAngle != 180)
    {
        cout << "Invalid. Enter the supplementary angle again: ";
        cin >> secondAngle;
    }

    if (secondAngle < 90)
    {
        cout << "The supplementary angle is acute." << endl;
    }
    else if (secondAngle > 90)
    {
        cout << "The supplementary angle is obtuse." << endl;
    }
}

void squareNumbers(){

     int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
}