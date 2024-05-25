#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid]>arr[0]){
            s = mid+1;//this fgraph is monotoniacally increasing
        }

        else{
           e = mid;//this contains both monotonically decreasing and pivot value 
        }

        mid = s + (e-s)/2;


    }
    return s;//we can alo return e because at last e and s will be same and loop will end there
}

int Binarysearch(int arr[] ,int s,int e,int key){

    int start = s;
    int end = e;
    int mid = (start + end)/2;
    while(start<=end){

        if (arr[mid]==key){
            return mid;
        }

//here if mid is max than key we decrease the end and vice versa
        if(arr[mid]>key){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
//updating mid
        mid = (start+end)/2;


    }
    return -1;
}


int findposition(int arr[],int n , int key){

    int getpivot = pivot(arr, n);

    if(key>=arr[getpivot] && key<=arr[n-1]){

        return Binarysearch(arr,getpivot,n-1,key);
    }
    else{
        return Binarysearch(arr,0,getpivot-1,key);

        
    }
} 

int main(){
    int key;
    cin>>key;
    int arr1[5] = {7,8,1,2,3};
    cout<<"index is"<<" "<<findposition(arr1,5,key);
}