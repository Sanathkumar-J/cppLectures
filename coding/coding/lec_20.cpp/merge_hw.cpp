#include<iostream>
//merging two arrays neglecting zeroes


using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j] && arr1[i]!=0 && arr2[j]!=0 ){
            arr3[k] = arr1[i];
        }

        else if(arr1[i]>arr2[j] && arr1[i]!=0 && arr2[j]!=0 ){
            arr3[k] = arr2[j];
        }
        i++;
        j++;
        k++;
    }

    while(i<n && arr1[i]!=0){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m && arr2[j]!=0){
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

    int arr1[] = {1,2,0,0};
    int arr2[] = {5,0,6,7};
    int arr3[] = {0};
    merge(arr1,4,arr2,3,arr3);

    printans(arr3,5);
    return 0;

}