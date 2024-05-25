#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int first = 0;
    int end = n-1;
    while(first<=end){

        swap(arr[end],arr[first]);
        first++;
        end--;

    }
}


void printarr(int arr[],int n){
    for(int i = 0; i>n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {1,3,4,5,7};
    int arr2[6] = {11,12,13,14,15,16};
    reverse(arr1,5);
    reverse(arr2,6);
    printarr(arr1,5);
    printarr(arr1,5);

    return 0;
}



