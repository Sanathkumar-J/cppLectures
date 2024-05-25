#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
void sortOddEven(vector<int>& nums){
    vector<int>v;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<(nums.size());i++){
        if((nums[i]%2)!=0){
            v.push_back(nums[i]);
        }
    }
    int s = 0;
    int e = v.size() - 1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int j = 0;j<(nums.size());j++){
        if(nums[j]%2==0){
            v.push_back(nums[j]);
        }
    }
    for(int k = 0;k<(v.size());k++){
        cout<<v[k]<<" ";
    }
}

int main(){
   vector<int>m;
   m.push_back(6);
   m.push_back(1);
   m.push_back(3);
   m.push_back(2);
   m.push_back(9);
   m.push_back(5);
   m.push_back(8);
   m.push_back(4);
   sortOddEven(m);
}