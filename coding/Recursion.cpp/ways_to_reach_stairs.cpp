#include<iostream>
using namespace std;

int countways(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = countways(n-1) + countways(n-2);
    return ans;
}

int main(){
    int n = 5;
    int ans = countways(n);
    cout<<ans;
}



