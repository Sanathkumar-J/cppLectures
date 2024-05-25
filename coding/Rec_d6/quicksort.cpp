#include<iostream>
using namespace std;



int partition(int arr[] , int s, int e){
    int count = 0;
    int pivot = arr[s];
    for(int i = s+1; i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivod index in the right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int i = s,j = e;
    while(i<pivotIndex && j > pivotIndex){       
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        // this is the case where the i which is before pivot value will be greater and j which is after pivot value will be lesser
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    
}

void quicksort(int arr[],int s,int e){
    //basecase
    if(s>=e){
        return;
    }

    //partition returns the pivotindex
    int p = partition(arr,s,e);
    //sort left part
    quicksort(arr,s,p-1);
    //sort right part
    quicksort(arr,p+1,e);

}
int main(){
    int arr[6] = {5,6,2,4,9,66};
    int s = 0;
    int e = 5;
    quicksort(arr,s,e);
    for(int i = 0;i<e;i++){
        cout<<arr[i]<<" ";
    }
}