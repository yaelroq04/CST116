/*
Yael Roque
CST 116 - Programming Concepts I
01/26/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printSong();
void printVerse(int i);

int main() {
    
    printSong();

    return 0;
}

void printSong(){
    for (int i = 999; i > 0; i--){
        printVerse(i);
    }
}

void printVerse(int i){
    cout << i << " bottles of rootbeer on the wall!" << endl;
    cout << i << " bottles of rootbeer!" << endl;
    cout << "Take one down, pass it around" << endl;
    cout << (i-1) << " bottles of rootbeer on the wall!" << endl;
    cout << endl;
}