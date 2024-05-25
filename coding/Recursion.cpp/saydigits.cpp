#include<iostream>
using namespace std;

void saydigits(int n, string arr[]){
    //basecase
    if(n==0){
        return;
    }
    int value = n % 10;
    n = n / 10;
    saydigits(n,arr);
    cout<<arr[value] << " "; // head recursion if I use tail recursion i will get values in reverse 
}



int main(){

    string arr[10] = { "Zero","One","two","three","four","five","six","seven","eight","nine"};
    int n = 512;
    saydigits(n,arr);
    
}