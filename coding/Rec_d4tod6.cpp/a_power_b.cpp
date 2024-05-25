#include<iostream>
using namespace std;

int power(int a ,int b){
    //basecase
    if(b==0){
        return 1;
    }
    if(b==1){
        return 2;
    }
    int answer = power(a,b/2);
    if(b%2==0){
        return answer*answer;
    }
    else{
        return answer*answer*a;
    }
}
int main(){

    int a = 2;
    int b = 5;
    int ans = power(a,b);
    cout<<ans;

}