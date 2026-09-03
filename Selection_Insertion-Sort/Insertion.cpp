#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;
    for(int ele : arr){   // It is call "for each"loop
        cout<<ele<<" ";
    }
    cout<<endl;

    // Insertion Sort
    for(int i=1;i<=n-1;i++){
       int  j=i;
    //    while(j>=1){
    //     if(arr[j]>=arr[j-1]) break;
    //     if(arr[j]<arr[j-1]){
    //         swap(arr[j],arr[j-1]);
    //     }
    //     j--;
    //    }

    // Other Method
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    }
    for(int ele : arr){   // It is call "for each"loop
        cout<<ele<<" ";
    }
}