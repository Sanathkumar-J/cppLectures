#include<iostream>
using namespace std;

int fib(int n){
    int f0 = 0;
    int f1 = 1;
    int nextterm = 0;
    for(int i = 0;i<n;i++){
        if(i==0){
            cout<<0;
            continue;
        }
        if(i==1){
            cout<<1;
            continue;
        }
        nextterm = f0 + f1;
        f0 = f1;
        f1 = nextterm;


    }
    return f1;
}

int main(){
    int n = 5;
    int ans = fib(5);
    cout<<ans;

}