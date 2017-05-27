//
// Created by fishpan1209 on 5/24/17.
// exercise 2.3 Create a program that opens a file and counts the whitespace-separated words in that file.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Exercise2dot3 {
    int countWords(string filename) {
        ifstream in(filename);
        int count = 0;
        string word;

        if (in.is_open()) {
            while (in >> word) {
                ++count;
            }

            in.close();
        }
        else cout << "Unable to open file." << endl;

        cout << "Number of white space separated words: " << count << endl;

    }

};

/*
 int main() {
    Exercise2dot3 test;
    test.countWords("/Users/aojing/CLionProjects/ThingkingInCPP/words.cpp");
    return 0;
}
*/
