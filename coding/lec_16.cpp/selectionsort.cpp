#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){

    for(int i = 0;i<(n-1);n++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
    swap(arr[minIndex],arr[i]);
    }
}