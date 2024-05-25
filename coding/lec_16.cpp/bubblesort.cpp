#include<iostream>
using namespace std;

bool swapping = false;//optimising code in case of time complexity

void bubblesort(int arr[],int n){
    for (int i = 0;i<n;i++){//total no.of rounds are n-1
        for(int j = 0;j<n-i;j++){
            //process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapping = true;
            }
        }
        if(swapping = false){//here if the array is sorted in the middle of loop the bool will be false then we can break
            break;//already sorted
        }
    }
    
}

int main(){

    int arr[5] = {1,9,8,7,6};
    bubblesort(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }


}