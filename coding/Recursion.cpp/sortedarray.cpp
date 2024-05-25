#include<iostream>
using namespace std;

bool find(int arr[] , int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = find(arr+1,n-1);
        return ans;
    }
   
}

int main(){

    int arr[5] = {1,5,3,4,5};
    int ans = find(arr,5);
    cout<<ans;


}