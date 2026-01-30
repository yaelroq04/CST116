// Midterm1Practice.cpp : Directions (2 pts for Q1, 2 pts for Q2, 1 pt for Q3)
//1. Write a function for calculating the how much money a student earns in a
//week.
// Prompt the user to enter the number of hours a week they work. (h)
// Prompt the user to enter the hourly wage. (w)
// Display their weekly wage as a product of the hourly wage and the number of
//hours they work.
//2. Write function to determine how a student is doing in class. Ask them 2
//questions, e.g.
// "What is 1+2?" and "What is 2+3?" OR
// "What is the third letter of the alphabet?" and "What is the "fifth letter of
//the alphabet?".
// If they get both questions correct, print "Good job".
// If they get one question correct, print "You are making progress".
// If they get no questions correct, print "Please get help from the teacher."
//3. Answer the following questions.
//3a. Name and describe three parts of a CPU.
//3b. Who is credited with creating the analytical engine? Who is credited with
//creating the first program?

#include <iostream>
using namespace std;

//Function Prototypes
void wageEarned();
void studentClass();


int main()
{

    //wageEarned();
    studentClass();
}

void wageEarned(){

    int hours = 0;
    double wage = 0;

    cout << "Please enter the amount of hours you work per week: ";
    cin >> hours;
    cout << "Please enter your hourly wage: ";
    cin >> wage;

    double weeklyWage = wage * hours;

    cout << "Your weekly wage is: " << weeklyWage << endl;

}

void studentClass(){

    int a = 0;
    int b = 0;

    cout << "What is 2 + 3? ";
    cin >> a;
    cout << "What is 4 + 6? ";
    cin >> b;

    if (a == 5 && b==10){
        cout << "Good Job!";
    }
    else if (a == 5 || b==10){
        cout << "You're making progess!";
    }
    else {
        cout << "Please get help from the teacher.";
    }
}
