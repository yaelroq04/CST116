/*
Yael Roque
CST 116 - Programming Concepts I
01/15/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Function Protoype
void medianFunction();

int main() {

    medianFunction();
    
    return 0;
}

void medianFunction(){

    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c; //gets 3 numbers from the user

    double median;

    // Check all conditions to find the median
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        median = a;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        median = b;
    }
    else {
        median = c;
    }

    cout << "The median is: " << median << endl;

}

