#include <iostream>
using namespace std;

int main() {

    // x is deduced as int
    auto x = 42;
    
    // pi is deduced as double
    auto pi = 3.1415926535;  

    cout << "x: " << x << endl;
    cout << "pi: " << pi << endl;

    return 0;
}
