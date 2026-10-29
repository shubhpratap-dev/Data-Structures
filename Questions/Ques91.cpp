#include <iostream>
using namespace std;

namespace one {

    void display() {
        cout << "namespace one" << endl;
    }
}

namespace two {

    void display() {
        cout << "namespace two" << endl;
    }
}

int main() {

    using namespace one;

    // call one::display()
    display();
    
    // call two:: display
    two::display();
    
    return 0;
}
      
        Run Code 
      
    
