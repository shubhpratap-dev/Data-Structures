#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    // (Source, Helper, Destination
    if(n==0) return;
    hanoi(n-1,a,c,b);  // Bcz for (n-1) disks a is source, b is destination and c is helper
    cout<<a<<" -> "<<c<<endl;  // Here, we tranfer largest disk from a to c
    hanoi(n-1,b,a,c);  // Bcz now for (n-1) disks b is source, c is destination and a is helper 
}
int main(){
    int n = 4;  // No. of disks
    hanoi(n, 'A','B','C');
}