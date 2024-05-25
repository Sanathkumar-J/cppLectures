#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter number"<<endl;
    cin>>a;
    cout<<"enter power"<<endl;
    cin>>b;
    int power = b;
    int result = 1;
    while(power>0){

        result = result*a;
        power = power -1;
        
    }

    cout<<result;


}