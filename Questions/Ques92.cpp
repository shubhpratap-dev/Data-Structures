using namespace one;

namespace one {
    void display() {...}
}

void display() {...}

int main() {

    // Error: more than one instance of display()
    display();

    return 0;
}
