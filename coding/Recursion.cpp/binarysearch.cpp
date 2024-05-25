#include<iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e,int key){
    //basecase
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
        
    }
    
    if(arr[mid] > key){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        return binarysearch(arr,mid+1,e,key);
    }


}

int main(){
    int arr[] = {1,2,3,4,5};
    int s = 0;
    int e = 5;
    int key = 4;

    bool ans = binarysearch(arr,s,e,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }

}