//
// Created by fishpan1209 on 5/25/17.
// Change Fillvector.cpp so it prints the lines (backwards) from last to first.
//

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Exercise2dot5 {
    int fillVector(string filename) {
        vector<string> v;
        ifstream in(filename);
        string line;
        while(getline(in, line)) {
            v.push_back(line);
        }

        for(int i=v.size(); i>=0; i--) {
            cout << i << ":" << v[i] << endl;
        }

    }

};

/*
int main() {
    Exercise2dot5 test;
    test.fillVector("/Users/aojing/CLionProjects/ThingkingInCPP/fillVector.cpp");
    return 0;
}
*/
