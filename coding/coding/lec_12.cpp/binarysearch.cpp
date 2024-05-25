//it saves time complexity 
//here i used the mid formula as below but it has one draw back of INT_MAX 
//so we can also use formula as mid=start + (end-start)/2 which gives same result
//array should be sorted ascending order to decending
//this method is only valid for monotonic functions
#include<iostream>
using namespace std;

int Binarysearch(int arr[] ,int n,int key){

    int start = 0;
    int end = n-1;
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


int main(){
    int key;
    cin>>key;
    int arr1[6] = {1,2,3,6,5};
    int index = Binarysearch(arr1,5,key);
    cout<<index;
    return 0;
}
