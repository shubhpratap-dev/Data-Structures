#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[6] = {5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    // Bubble Sort
    for(int i=0;i<n-1;i++){     // till n-1 bcz n-1 passes
        // traverse
        for(int j=0;j<n-1-i;j++){  // n-1-i bcz we dont want to compare the last element
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}