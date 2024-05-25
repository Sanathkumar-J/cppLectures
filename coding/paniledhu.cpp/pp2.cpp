#include<iostream>
using namespace std;

int main(){
    int n = 100;
    int *p = 0;
    p = &n;
    *p = NULL;
    cout<<n;

}