// multiply the facevalues of number and also add then subtract them



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int mul =1;

    while(n!=0){
        int digit = n%10;
        sum = sum+digit;
        mul = mul*digit;
        n = n/10;

    }
    cout<<"sum"<<"="<<sum;
    cout<<endl;
    cout<<"mul"<<"="<<mul;
    cout<<endl;
    cout<<"difference"<<"="<<mul - sum;

}