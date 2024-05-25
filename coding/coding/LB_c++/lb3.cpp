#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int i =1;
    int sum = 0;

    while (i<=a){
        if (i%2==0){
            sum = sum + i;
            i = i + 1;
        }
        else{
            i = i+1;
        }
       
    }
    cout<<sum;
    return 0;

    




}