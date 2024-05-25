//here the first duplicate will be given as output eventhough we have more duplicates after this

#include<iostream>
using namespace std;

void duplicate(int arr[],int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
        if(ans==0){
            cout<<arr[i];
            break;
        }
    }

}

int main(){
    int arr1[5] = {1,2,3,3,4};
    duplicate(arr1,5);
}