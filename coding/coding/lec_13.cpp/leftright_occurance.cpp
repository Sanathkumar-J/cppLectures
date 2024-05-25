//binary search problem have to find left most occurance and right as well 

#include<iostream>
using namespace std;

int Leftocc(int arr[] ,int n,int key){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){

        if (arr[mid]==key){
            ans = mid;
            end = mid - 1;//this is the only difference in both for left we decrease end term
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

        return ans;


    }
    return -1;
}

int lastocc(int arr[] ,int n,int key){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;
    while(start<=end){

        if (arr[mid]==key){
            ans = mid;
            
            start = mid + 1;//for right we increase start term //khelo dimak se
        }

//here if mid is max than key we decrease the end and vice versa
        else if(arr[mid]>key){
            
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
//updating mid
        mid = (start+end)/2;

        


    }
    return ans;
    
}


int main(){
    int key;
    cin>>key;
    int arr1[11] = {1,2,3,3,3,3,3,3,3,3,5};
    int lastindex =lastocc(arr1,11,key);
    cout<<"last most occurance"<<" "<<lastindex;
    cout<<endl;
    int leftindex =Leftocc(arr1,5,key);
    cout<<"left most occurance"<<" "<<leftindex;
    return 0;
}
