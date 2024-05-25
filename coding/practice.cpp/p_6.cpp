#include<iostream>
using namespace std;

void insort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int current = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}
    
int main(){
    int n = 5;
    int arr[5]; 
    //cin >> n;
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
