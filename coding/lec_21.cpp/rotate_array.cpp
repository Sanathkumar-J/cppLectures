//arr[i+k%n] = arr[i]

#include<iostream>
using namespace std;

void rotatearr(int arr[],int n,int k,int temp[]){
    for(int i = 0;i<n;i++){
        temp[(i+k)%n] = arr[i];

    }

}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {0};
    int k = 2;
    int n = 5;
    rotatearr(arr1,5,2,arr2);
    for (int i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    
}

