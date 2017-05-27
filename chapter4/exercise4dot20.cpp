// Then create a structure that has no members at all. Print out the sizes of all these.
// Explain the reason for the result of the structure with no data members at all.
//


/*
size of struct A is 8 bytes
size of struct B is 4 bytes
size of struct C is 1 bytes

 1. each int occupies two bytes.
 2. struct C: In C, this is illegal, but in C++ we need the option of creating a struct whose sole task is to scope function names, so it is allowed.
 Still, the result produced by the second print statement is a somewhat surprising nonzero value.
 In early versions of the language, the size was zero, but an awkward situation arises when you create such objects:
 They have the same address as the object created directly after them, and so are not distinct.
 One of the fundamental rules of objects is that each object must have a unique address, so structures with no data members will always have some minimum nonzero size.

 */
#include <iostream>

using namespace std;

// data members only
struct A {
    int a;
    int b;

};

// data members and function members
struct B {
    int a;
    void f() {

    }

};

// no members
struct C {

};


int main() {
    cout << "size of struct A is " << sizeof(A) << " bytes" << endl;
    cout << "size of struct B is " << sizeof(B) << " bytes" << endl;
    cout << "size of struct C is " << sizeof(C) << " bytes" << endl;
}
