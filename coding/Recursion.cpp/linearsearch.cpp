#include<iostream>
using namespace std;    
bool lsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return lsearch(arr+1,size-1,key);

}

int main(){
    int arr[5] = {1,2,3,4,15};
    bool ans =  lsearch(arr,5,15);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"Absent";
    }
}