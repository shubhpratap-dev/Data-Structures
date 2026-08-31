#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){     // This loop is to Enter the array
        cin>>v[i];
    }
    sort(v.begin(),v.end());  // To Sort the input array
    for(int i=0;i<5;i++){     // This loop is to print output array
        cout<<v[i]<<" ";
    }
}