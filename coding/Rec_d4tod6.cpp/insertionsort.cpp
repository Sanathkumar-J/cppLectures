#include<iostream>
using namespace std;

void insertionsort(int* arr,int n){
    for(int i=0; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[5] = {5,3,2,4,1};
    insertionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}