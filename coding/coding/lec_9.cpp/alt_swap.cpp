#include<iostream>
using namespace std;

void altswap(int arr[],int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}



int main(){

    int arr1[4] = {1,2,3,4};
    altswap(arr1,4); 
    printarr(arr1,4);
    
}