#include <iostream>
using namespace std;
void sum(int i, int n){
    if(n==0){
        cout<<i<<endl;
        return;
    }
    sum(i+n,n-1);
}
int main(){
    sum(0,10);
}