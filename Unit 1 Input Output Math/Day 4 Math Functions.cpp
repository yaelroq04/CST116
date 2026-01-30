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
    
    heronsFormula();
    quadraticFormula();
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

    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Please enter a value for A: ";
    cin >> a;
    cout << "Please enter a value for B: ";
    cin >> b;
    cout << "Please enter a value for C: ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;

    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Roots are " << root1 << " and " << root2 << endl;

}

void sphereVolume(){

    double radius;
    const double PI = M_PI;

    cout << "Please enter the radius of your sphere: ";
    cin >> radius;

    double volume = 4.0 / 3.0 * PI * pow(radius, 3.0);

    cout << "The volume of your sphere is " << volume << endl;
}