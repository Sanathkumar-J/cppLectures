#include<iostream>
using namespace std;

bool check(string str,int s,int e){
    //basecase
    if(s>e){
        return true;
    }
    if(str[s] == str[e]){
        s++;
        e--;
        return check(str,s,e);//recursive call
    }
    else{
        return false;
    }
}

int main(){
    string str = "dogswad";
    bool ans = check(str,0,6);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}