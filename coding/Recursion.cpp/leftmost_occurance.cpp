#include<iostream>
using namespace std;

int binarysearch(int *arr,int s,int e,int key){
    //basecase
    int ans =-1;
    if(s>e){
        int ans = -1;
        return ans; 
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        int ans = mid;
        binarysearch(arr,s,mid-1,key);
        return ans;
    }
    
    if(arr[mid] > key){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        return binarysearch(arr,mid+1,e,key);
    }
    return ans;


}

int main(){
    int arr[] = {1,4,4,4,5};
    int s = 0;
    int e = 5;
    int key = 4;

    int ans = binarysearch(arr,s,e,key);
    cout<<ans;
    

}
