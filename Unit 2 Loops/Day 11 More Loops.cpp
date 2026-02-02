/*
Yael Roque
CST 116 - Programming Concepts I
01/29/30
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void isPrime();
void isPerfect();
void euclideanAlgorithm();

int main() {
    
    isPrime();
    isPerfect();
    euclideanAlgorithm();

    return 0;
}

void isPrime(){

    int number = 0;

    cout << "Please enter a number: ";
    cin >> number;

   for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            cout << "IsPrime(" << number << ")  No" << endl;
            return;
        }
    }

    cout << "IsPrime(" << number << ")  Yes" << endl;
}

void isPerfect(){
    
    int number = 0;
    int sum = 0;

    cout << "Please enter a score: ";
    cin >> number;

    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            sum = sum + i;
    }

    cout << "IsPerfect(" << number << ")  ";
    if (sum == number)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void euclideanAlgorithm(){

  int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "Greatest Commom Factor is: " << a;
}





