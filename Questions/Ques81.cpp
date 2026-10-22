#include <iostream>
#include <vector>
using namespace std;

int main() {

    // create an integer vector
    vector<int> source = {1, 2, 3};

    // move the contents of source to another vector
    vector<int> destination = move(source);

    // print the destination vector
    cout << "Destination Vector Contents: ";
    for (const int num : destination) {
        cout << num << "  ";
    }
    
    // print the size of the destination vector
    cout << "\nDestination Vector Size: " << destination.size();

    return 0;
}
      
        Run Code 
      
    
