//negative number to binary..

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit =  not n ;
        ans = bit*pow(10,i)+ans;
        i++;
        n = n>>1;


    }
    cout<<not n ;


}