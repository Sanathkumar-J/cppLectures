#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;





int firstMissing(int arr[], int n){

    sort(arr,arr+n);
    
    vector<int> v;

    for(int i=0;i<n;i++){
        if(arr[i]!=0 and arr[i]>0){
           v.push_back(arr[i]);
        }
    }
    int max = INT_MIN;
    for(int j = 0;j<v.size();j++){
        if (max < v[j]) {
           max = v[j];
        }
    }
    int s = 1;
    
    int j = 0;
    for(int j = 0; j<v.size();j++){
        if (v[j] != s) {
            return s;
        
        }
        s++;
    
        
        
    }
    return max+1;
    
    

}
int main(){
    int arr1[10] ={26, -18, 34, 22, 31, 3, 5, 23, -40, -10};
    int ans = firstMissing(arr1,10);
    cout<<ans; 
}



   


   
