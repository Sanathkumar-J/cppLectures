#include<iostream>
using namespace std;

void arrsum(int arr1[],int n,int arr2[],int m,int arr3[]){
    int temp1 = 0;
    int temp2 = 0;
    for(int i = 0;i<n;i++){
        temp1 = arr1[i]*10 + temp1;
    }
    for(int j = 0;j<m;j++){
        temp2 = arr2[j]*10 + temp2;
    }
    int sum = temp1 + temp2;
    int count = 0;
    while(sum>=0){
       sum = sum/10;
       count++; 
    }
    for(int k = 0; k <count; k++){
        int ans = sum % 10;
        arr3[k] = ans;
        sum = sum/10;
    }

    for(int p = 0;p<=count;p++){
        cout<<arr3[p]<<" ";
    }
}

int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,0};
    int n = 3;
    int m = 2;
    int arr3[] = {0};
    arrsum(arr1,n,arr2,m,arr3);
    
}