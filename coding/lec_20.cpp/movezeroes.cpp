#include<iostream>
using namespace std;


void movezero(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[j]==0){
                swap(arr[i],arr[j]);
            }
        }    
        
    }
}

int main(){
    int arr[6] = {1,0,0,2,3,4};
    movezero(arr,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}