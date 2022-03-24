// Title: Basic Ofstream
// Purpose: Practice ofstream to create file with ios::app mode to keep old input while inputing new input
// Class: CSC 2430 Winter 2022
// Author: Fransiskus Agapa

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::fstream;
using std::ofstream;
using std::ifstream;
using std::string;

int main() {
    //ofstream file;
    ofstream file ("Hi_Champion.txt", std::ios::app);     // create a file named Hi_Champion - app mode lets user to add input without losing old data
    string input;

    std::getline(cin,input);

    file << input << endl;
    cout << " Input added to file " << endl;

    file.close();   // close file

    return 0;
}
