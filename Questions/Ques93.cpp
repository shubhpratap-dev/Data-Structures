#include <iostream>
using namespace std;

string cout() {
    return "\n";
}

int main() {

    // Error: cout is ambiguous
    cout << "Testing!" << endl;

    return 0;
}
