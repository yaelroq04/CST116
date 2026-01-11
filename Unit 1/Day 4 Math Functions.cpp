/*
Yael Roque
CST 116 - Programming Concepts I
DATE
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Function Prototypes
void heronsFormula();
void quadraticFormula();
void sphereVolume();

int main() {
    
    //heronsFormula();
    quadraticFormula();
    
}

void heronsFormula(){

    int sideA = 0;
    int sideB = 0;
    int sideC = 0;

    cout << "Please enter the length of side A: ";
    cin >> sideA;
    cout << "Please enter the length of side B: ";
    cin >> sideB;
    cout << "Please enter the length of side C: ";
    cin >> sideC;

    //finds semi perimeter to be used in Heron's Formula
    int semiPerimeter = (sideA + sideB + sideC) / 2; 

    //finds the area using Heron's Formula
    int herons = sqrt(semiPerimeter * (semiPerimeter-sideA) * (semiPerimeter-sideB) * (semiPerimeter-sideC));

    //prints the area after being calculated by Heron's Formula
    cout << "The area calculated is: " << herons;

}

void quadtraticFormula(){

    float A = 0;
    float B = 0;
    float C = 0;

    cout << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;
    cout << "Please enter a value for C: ";
    cin >> C;

    int discriminant = B * B - 4 * A * C;
    int denominator = 2 * A;
    int root = (-B + sqrt(discriminant)) / denominator;

    cout << root;

}