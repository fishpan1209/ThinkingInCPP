//
// Created by fishpan1209 on 5/31/17.
// Write a simple class called Simple with a constructor that prints something to tell you that it’s been called.
// In main( ) make an object of your class
//

#include <iostream>

using namespace std;

class Simple {
public:
   Simple() {
        cout << "constructor has been called" << endl;
    }
};

int main() {
    Simple test;
}
