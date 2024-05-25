//bubble sort
#include<iostream>
using namespace std;

void bubsort(int arr[],int n){
    for(int i =0;i<n;i++){
        //int min = i;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                //min = j;
            }
        }        
    }
}

int main(){
    int n = 4;
    int arr[5] = {1,8,7,6};
    bubsort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }


}