//selection sort

#include<iostream>
using namespace std;

void selsort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min]>arr[j] ){
                min = j;

            }

        }
    swap(arr[min],arr[i]);
    }
}

int main(){

    int arr[5] = {1,9,8,7,6};
    selsort(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i];
    }


}