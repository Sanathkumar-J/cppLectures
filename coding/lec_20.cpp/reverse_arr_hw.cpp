#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverse(int arr[],int n){
    int s = 2;
    int e = n;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){

    int arr1[5] = {1,2,3,4,5};
    reverse(arr1,5);
    
    for (int i = 0;i<5;i++){
        cout<<arr1[i]<<" ";
    }


}