//using xor

#include<iostream>
using namespace std;

void intsec(int arr1[],int arr2[],int n,int m){
    
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m ; j++){
            int ans = arr1[i]^arr2[j];
            if (ans == 0){
                cout<<arr1[i]<<" ";
                arr2[j] = i*j;
            break;
            
            }
    
        
        }

       
    }
}

int main(){

    int arr1[4] = {1,2,2,1};
    int arr2[2] = {2,2};
    intsec(arr1,arr2,4,2);
    
}