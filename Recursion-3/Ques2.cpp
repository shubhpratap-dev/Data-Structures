#include <iostream>
#include <vector>
using namespace std;

// Using normal array input
// void display(int arr[], int n, int idx){
//     if(idx==n) return;
//     cout<<arr[idx]<<" ";
//     display(arr,n,idx+1);
// }
// int main(){
//     int arr[] = {2,1,6,3,9,0,2,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     display(arr,n,0);
// }


// Using vector
void display(vector<int>& v, int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[] = {2,1,6,3,9,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }

    display(v,0);
}