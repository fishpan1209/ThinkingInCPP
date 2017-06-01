//
// Created by fishpan1209 on 5/31/17.
// Modify Exercise 2 so that the class contains an int member.
// Modify the constructor so that it takes an int argument that it stores in the class member.
// Both the constructor and destructor should print out the int value as part of their message, so you can see the objects as they are created and destroyed.
//

#include <iostream>

using namespace std;

class Simple {
    int x;
public:
    Simple(int xx) {
        x = xx;
        cout << "constructor has been called" << endl;
        print();
    }

    ~Simple() {
        cout << "destructor has been called" << endl;
        print();
    }

    void print() {
        cout << "x = " << x << endl;
    }
};



int main() {
    Simple test(5);
}
