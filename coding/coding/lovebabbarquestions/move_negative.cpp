#include<iostream>
using namespace std;

void move( int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<0){
                minIndex = j;
            }
        }
    swap(arr[i],arr[minIndex]);
    }
   
}

int main(){
    int arr[6] = {1,2,-1,5,-2,-3};
    move(arr,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}