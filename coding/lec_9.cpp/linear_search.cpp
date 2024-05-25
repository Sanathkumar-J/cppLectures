#include<iostream>
using namespace std; 

bool search(int arr[],int n,int key){

    for(int i = 0 ; i<n;i++){
        if(arr[i] == key){
            return 1;
        }

    }
    return 0;


}

int main(){
    int arr[5] = {12,13,14,15,16};
    cout<<"enter element"<<endl;
    int key;
    cin>>key;

    bool found = search(arr,5,key);

    if (found){
        cout<<"present";
    }
    else{
        cout<<"better luck bru";
    }
}