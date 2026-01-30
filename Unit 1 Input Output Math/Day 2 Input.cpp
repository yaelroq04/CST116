/*
Yael Roque
CST 116 - Programming Concepts I
01/07/2026

Pseudocode

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//function prototypes
void rectangleArea();
void trianglePerimeter();
void ageinDays();


int main() {

    rectangleArea();
    trianglePerimeter();
    ageinDays();

    return 0;
}

void rectangleArea(){
    int length = 0;
    int height = 0;

    cout << "please enter the length of your rectangle: ";
    cin >> length;

    cout << "Please enter the height of your rectangle: ";
    cin >> height;

    int area = length * height;

    cout << "The area of the rectangle is: " << area <<"\n";
}

void trianglePerimeter(){

    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    cout << "Please enter the length of side 1: ";
    cin >> side1;
    cout << "Please enter the length of side 2: ";
    cin >> side2;
    cout << "Please enter the length of side 3: ";
    cin >> side3;

    int perimeter = side1 + side2 + side3;

    cout << "The perimeter of the triangle is: " << perimeter <<"\n";

}

void ageinDays(){

    const int YEAR = 365;
    int age = 0;

    cout << "Please enter your age in years: ";
    cin >> age;

    int ageDays = age * YEAR;

    cout << "Your age in days is: " << ageDays;
    

}