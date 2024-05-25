//ex: arr={1,2,3,4,5} key = 3 it should return the index value of 3

#include<iostream>
using namespace std;


int occurance(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(arr[mid]==key){
            ans = mid;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    
    return ans;
    }
    return -1;
}


int main(){
    int arr1[5] = {1,2,3,4,5};
    int find = occurance(arr1,5,2);
    cout<<find;



}