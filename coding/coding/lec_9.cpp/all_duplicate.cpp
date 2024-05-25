#include<iostream>
using namespace std;

void alldup(int arr[],int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
        if(ans==0){
            cout<<arr[i]<<" ";
            
        }
    }
}

int main(){
    int arr1[6] = {1,2,3,4,3,2};
    alldup(arr1,6);
}