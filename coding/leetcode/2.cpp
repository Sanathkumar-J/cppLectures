#include<iostream>
using namespace std;

int sum(int n,int add = 0){
    if(n==0){
        return add;
    }
    int ad = n%10;
    add=+ad;
    sum(n/10,ad);
    return ad;
}

int main(){
    int num = 56;
    int add = 0;
    int ans = sum(num, add);
    cout<<sum;


}