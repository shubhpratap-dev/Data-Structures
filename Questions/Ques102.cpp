#include <iostream>
using namespace std;

template <class T, int size>
class Container {

  static_assert(size > 0, "The size of container cannot be less than 1");
  T items[size];
};

int main() {
  Container<int, 0> st;
  return 0;
}
