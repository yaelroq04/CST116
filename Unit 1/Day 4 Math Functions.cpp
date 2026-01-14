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
    //quadraticFormula();
    sphereVolume();
    
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
    cout << "The area calculated is: " << herons << endl;

}

void quadraticFormula(){

    double A = 0;
    double B = 0;
    double C = 0;

    cout << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;
    cout << "Please enter a value for C: ";
    cin >> C;

    double DISCRIMINANT = B * B - 4 * A * C;

    double ROOT1 = (-B + sqrt(DISCRIMINANT)) / (2 * A);
    double ROOT2 = (-B - sqrt(DISCRIMINANT)) / (2 * A);

    cout << "Roots are " << ROOT1 << " and " << ROOT2 << endl;

}

void sphereVolume(){

    double RADIUS;
    const double PI = M_PI;

    cout << "Please enter the radius of your sphere: ";
    cin >> RADIUS;

    double VOLUME = 4.0 / 3.0 * PI * pow(RADIUS, 3.0);

    cout << "The volume of your sphere is " << VOLUME << endl;
}