#include<iostream>

using namespace std;

void merge( int arr1[],int n,int arr2[],int m,int arr3[]){

    int i = 0,j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;

        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    //copy first array k element ko
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    //copy second array k remaining element ko
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
     
}

void printans(int ans[],int n){
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7};
    int arr3[] = {0};
    merge(arr1,4,arr2,3,arr3);

    printans(arr3,7);
    return 0;

}