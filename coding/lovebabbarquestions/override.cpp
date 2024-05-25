#include<iostream>
using namespace std;

void override(int arr[],int n){
    
    for(int i = 0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = arr[n-1];
    for(int i = 0;i<n-1;i++){
        arr[n-1] *= arr[i];
    }
    //n = n-1;
    // for(int j = 0;j<n;j++){
    //     cout<<arr[j]<<" ";
        
    // }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    override(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    
}