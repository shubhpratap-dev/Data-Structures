#include <iostream>
#include <vector>
using namespace std;

int main() {

    // create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // use a range-based for loop
    // to iterate through the vector
    for (const auto& num : numbers) {
        cout << num << " ";
    }

    return 0;
}
