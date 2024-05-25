#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool is_prime = 1;
    for(int i =2;i<=(n-1);i++){
        if(n%i==0){
            is_prime = 0;
            break;
        } 
   }
    if(is_prime ){
        cout<<"prime";
    }
    else{
        cout<<"no bro its not a prime";
    }



}