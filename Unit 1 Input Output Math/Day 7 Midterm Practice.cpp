// Midterm1Practice.cpp : Directions(2 pts for Q1, 2 pts for Q2, 1 pt for Q3)
//1.  Write a method for testing reliability that prompts the user to enter 
//the values of lambda and time and calculates reliability=e^-(lambda *t).  
//You will need to use the exp function in math.h
//2.  Write a method to give weather advice.  Ask the user if it is cloudy and
//what the temperature is.  If the it is clear, say it is sunny.   If it is cloudy
//and the temperature is less than 32, say it will snow.  If it is cloudy and
//the temperature is 32 or more, say it will rain.
//3. Answer the following questions.
//3a.  What are two examples of application software?
// Word and Zoom
//3b.  What are the 7 steps of the development process?
// Planning, Requirements, Design, Coding, Testing, Deployment, Maintenance
//3c.  What is 134 in binary and hex? 
//10000110 , 86

#include <iostream>
#include <cmath>

using namespace std;

void testReliability();
void weatherAdvice();

int main()
{
    testReliability();
    weatherAdvice();
}

void testReliability(){
    double lambda;
    double time;

    cout << "Enter lambda: ";
    cin >> lambda;
    cout << "Enter time: ";
    cin >> time;

    double reliability = exp(-(lambda * time));

    cout << "Reliability = " << reliability << endl;

}

void weatherAdvice(){

    char cloudy;
    int temp;

    cout << "Is it cloudy? (y/n): ";
    cin >> cloudy;
    cout << "Enter the temperature: ";
    cin >> temp;

    if(cloudy == 'n'){
        cout << "It is sunny." << endl;
    }
    else {
        if(temp < 32){
            cout << "It will snow." << endl;
        }
        else {
            cout << "It will rain." << endl;
        }
    }
}