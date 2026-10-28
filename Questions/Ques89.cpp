#include <iostream>
using namespace std;

// create a namespace with a double variable
namespace dbl {
    double var;
}

int main() {
    
    // create an int variable of the same name
    int var = 5;
    
    // use the created namespace to avoid naming conflict
    dbl::var = 5.55;
    
    // display the variables
    cout << "dbl var = " << dbl::var << endl;
    cout << "main var = " << var << endl;
    
    return 0;
}
