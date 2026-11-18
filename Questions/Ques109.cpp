#include <iostream>
#include <cstring>

using namespace std;

int main() {

    // create a C-string
    const char* str = "Hello, World!";

    // print the C-string
    cout.write(str, strlen(str));
    
    return 0;
}
