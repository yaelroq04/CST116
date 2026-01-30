/*
Yael Roque
CST 116 - Programming Concepts I
01/09/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

#define pi 3.14

using namespace std;

void cylinderVolume();

int main() {
    
    cylinderVolume();

    return 0;
}

void cylinderVolume(){

    int radius = 0;
    int height = 0;

    cout << "Please input the radius of your cylinder: ";
    cin >> radius;
    cout << "Please input the height of your cylinder: ";
    cin >> height;

    double VOLUME = pi * pow(radius, 2) * height;

    cout << "Your cylinder volume is: " << VOLUME;
}