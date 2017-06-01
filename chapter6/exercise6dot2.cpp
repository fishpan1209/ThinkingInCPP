//
// Created by fishpan1209 on 5/31/17.
// Add a destructor to Exercise 1 that prints out a message to tell you that it’s been called.
// In main( ) make an object of your class
//

#include <iostream>

using namespace std;

class Simple {
public:
   Simple() {
        cout << "constructor has been called" << endl;
    }

    ~Simple() {
        cout << "destructor has been called" << endl;
    }
};


int main() {
    Simple test;
}
