//power of 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
   

    while(n!=0){
        int ans = n & 1;
        
        if(ans%10==1){
            count = count + 1;
        }
        n = n>>1;
    }
    if (count == 1){
        cout<<"it is power of 2";

    }
    else{
        cout<<"fuck its not power of 2";
    }

        
    


}