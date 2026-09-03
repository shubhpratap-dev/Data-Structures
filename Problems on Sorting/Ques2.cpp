#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int  n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;

    // this code is applicable for any type of int including (-)ve. But it make T.C. & S.C. both O(n^2)
    // vector<int> v(n,0);  // 0 means not visited
    // for(int i=0;i<n;i++){
    //     int min = INT_MAX;
    //     int mindx = -1;
    //     for(int j=0;j<n;j++){
    //         if(v[j] == 1) continue;
    //         else{
    //             if(min>arr[j]){
    //                 min = arr[j];
    //                 mindx=j;
    //             }
    //         }
    //     }
    //     arr[mindx] = x;
    //     v[mindx] = 1;
    //     x++;
    // }

    // This code is only applicable for positive number integers
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(arr[j] <= 0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx=j;
                }
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i=0;i<n;i++){
        arr[i] = -arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}