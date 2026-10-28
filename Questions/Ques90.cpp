#include <iostream>
using namespace std;

namespace one {
    
    void display() {
        cout << "namespace one" << endl;
    }

    // create another namespace inside namespace one    
    namespace one_one {
        void display() {
            cout << "namespace one_one" << endl;
        }
    }
}

namespace two {
    void display() {
        cout << "namespace two" << endl;
    }
}

void display() {
    cout << "not a namespace" << endl;
}

int main() {

    // call the display() function of namespace one    
    one::display();

    // call the display() function of namespace one_one
    one::one_one::display();

    // call the display() function of namespace two
    two::display();

    // call the display() function outside the namespaces
    display();
    
    return 0;
}
