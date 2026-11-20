#include <iostream>
#include <fstream>

using namespace std; 

int main() {

    // opening a text file for writing
    ofstream my_file("example.txt");

    // close the file
    my_file.close();

    return 0;
}
