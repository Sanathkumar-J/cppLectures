#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int mask = 0;
    while(n!=0){
        mask =  (mask<<1) | 1;
        n = n>>1;

    }
    int temp = ~n;
    int ans =  temp ;
    cout<<mask;
    

}