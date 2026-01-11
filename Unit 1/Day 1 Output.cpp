/*
Yael Roque
CST 116 - Programming Concepts I
01/07/2026

Pseudo Code
main
Output "Hello, World!" to the screen
calls poem function
end main

poem function
outputs Nothing Gold Can Stay
end function
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void poem();

int main() {
    cout << "Hello, World!\n";
    poem();

    return 0;
}

void poem(){
    cout << "Nature's first green is gold,\nHer hardest hue to hold.\nHer early leaf's a flower,\nBut only so an hour.";

    return;
}