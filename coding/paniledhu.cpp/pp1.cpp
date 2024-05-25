#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 bool isPalindrome(int x){ 
        vector<int>arr;
        
        while(x!=0){
            int n = x%10;
            arr.push_back(n);
            x = x/10;
        }
        int s = 0;
        int e = arr.size()-1;
        bool me;
        if(x<0){
            me = false;
        }
        while(s<=e && x>0){
            if(arr[s]==arr[e]){
                me = true;
                s++;
                e--;
            }
            else{
                me = false;
                break;
            }
        }
        return me;
    }

int main(){

    int n = 121;
    bool p = isPalindrome(n);
    cout<<p;
   
        
    
}