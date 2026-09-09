#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int> v, int arr[], int n, int target, int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();  // bcz every time we have to enter elements in empty array so after push_back we need to pop it and that push array is added in upper command

    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    combination(v,arr,n,8,0);
}