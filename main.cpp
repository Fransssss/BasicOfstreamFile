// Title: Basic Ofstream
// Purpose: Practice ofstream to create file with ios::app mode to keep old input while inputing new input
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::string;

int main() 
{
    ofstream file ("Hi_Champion.txt", std::ios::app);     // create a file named Hi_Champion - app mode lets user to add input without losing old data
    string input;

    cout << " Input data to be added to file: " << endl;
    std::getline(cin,input);
    file << input << endl;
    cout << " Input added to file " << endl;

    file.close();   // close file

    return 0;
}
