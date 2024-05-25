#include<iostream>
using namespace std;

void sort(int*arr , int size){
    //base case
    if(size==1 || size==0){
        return;
    }
    //recursive relation
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    sort(arr,size-1);
}

int main(){
    int arr[5] = {5,4,3,2,1};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}