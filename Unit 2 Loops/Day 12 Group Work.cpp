/*
Yael Roque
CST 116 - Programming Concepts I
02/02/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void binaryResult();

int main() {
    
    binaryResult();

    return 0;
}

void binaryResult(){

    int decimalValue = 0;
    int workingValue = 0;
    int remainder = 0;
    int binary = 0;
    int placeHolder = 1;

    cout << "Enter a decimal value: ";
    cin >> decimalValue;

    workingValue = decimalValue;

    for(; workingValue > 0;)
    {
        remainder = workingValue % 2;
        binary = binary + (remainder * placeHolder);
        placeHolder = placeHolder * 10;
        workingValue = workingValue / 2;
    }

    cout << decimalValue << " in base 2 binary is: " << binary;

}