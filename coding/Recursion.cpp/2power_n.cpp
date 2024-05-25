#include<iostream>
using namespace std;
int power(int n){
    //basecase
    // if(n==1){
    //     return 2;
    // }
    if(n==0){
        return 1;
    }
    return 2 * power(n-1);
}
int main(){
    int n = 5;
    cout<<2*2*2*2*2<<endl;
    int ans = power(n);
    cout<<ans;
}