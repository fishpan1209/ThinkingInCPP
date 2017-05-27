//
// Created by fishpan1209 on 5/27/17.
// 4.17 Dynamically create pieces of storage of the following types, using new: int, long, an array of 100 chars, an array of 100 floats. Print the addresses of these and then free the storage using delete.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    int *myint = new int;
    long *mylong = new long;
    char *mychararray = new char[100];
    float *myfloatarray = new float[100];

    cout << "address of new int: " << myint << endl;
    cout << "address of new long: " << mylong << endl;
    cout << "address of new char array: " << mychararray << endl;
    cout << "address of new float array: " << myfloatarray << endl;

    // free memory
    delete myint;
    delete mylong;
    delete [] mychararray;
    delete [] myfloatarray;
}
