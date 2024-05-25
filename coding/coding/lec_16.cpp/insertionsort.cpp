#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int current = arr[i];
        int j = i-1;
        //for(int j = i-1;j>=0;j--){//we compare all jth element with before all elemts and shift to correct place so i-1 to 0 
        //better using while loop

        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
            
        }
        arr[j+1] = current;//in this case (arr[j]<current) then current value will be placed at j+1 position 
        

    }
}

int main(){
    int arr[5] = {5,4,3,2,1};
    insertionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}