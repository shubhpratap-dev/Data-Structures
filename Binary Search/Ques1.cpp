#include <iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int x = 12;
    int n = 9;

    // // It is by Linear Search
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    // By Binary Search
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo = mid+1;
        else if(arr[mid]>x) hi = mid-1;
    }
    if(flag == false) cout<<arr[hi];

    // Note: Toi get upper bound just replace arr[hi] by arr[lo] i.e. if(flag == false) cout<<arr[lo];  This gives you upper bound. 

}
