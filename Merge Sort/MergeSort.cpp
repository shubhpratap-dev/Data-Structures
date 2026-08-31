#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0;  // a
    int j=0;  // b
    int k=0;  // res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){ // a is at end
        while(j<b.size()){
            res[k++] = b[j++];
        } 
    }
    if(j==b.size()){ // a is at end
        while(i<a.size()){
            res[k++] = a[i++];
        } 
    }

}
void mergesort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;  // Size of Size of first divided array
    int n2 = n-n/2; // size of second divided array
    vector<int> a(n1), b(n2);  // two array which get original array divided elements
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }

    // magic aka recursion
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
    a.clear();  // To save the sapce complexity
    b.clear();

}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}