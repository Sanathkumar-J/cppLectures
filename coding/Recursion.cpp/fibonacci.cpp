#include<iostream>
using namespace std;

int fibonacci(int n){
    //basecase
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //Recursive function 
    return fibonacci(n-1) + fibonacci(n-2);

}

int main(){
    int n = 7;
    int ans = fibonacci(n);
    cout<<ans;
}