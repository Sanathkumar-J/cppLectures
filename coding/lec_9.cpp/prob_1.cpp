//sum of all numbers in array

#include<iostream>
using namespace std;

int Sum(int arr[],int n){
    int add = 0;
    for(int i = 0;i<n;i++){
        add = add + arr[i];
    }
    return add;
}

int main(){

    int rab[5] = {1,2,3,4,5};
    cout<<Sum(rab,5);
}