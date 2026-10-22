#include <iostream>
#include <thread>

using namespace std;

void sayHello(){
  cout << "Hello, from the spawned thread\n";
}

int main(){
    // create a std::thread object
    std::thread t(sayHello);

    std::cout << "Hello, from the main thread\n";

    // wait for the thread to complete its job
    t.join();

}
