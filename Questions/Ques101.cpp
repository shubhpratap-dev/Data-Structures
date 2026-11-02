#include <iostream>
using namespace std;

int main() {

  static_assert(sizeof(int) >= 4, "Size of integer must be greater than or equal to 4 bytes");

  return 0;
}
