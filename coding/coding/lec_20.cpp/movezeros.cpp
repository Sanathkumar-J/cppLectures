#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void movezeros(vector<int>& nums){
    //shift all nonzeros to the left
    int nonzeroindex = 0;
    for(int j = 0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonzeroindex]);
            nonzeroindex++;
        }
    }
}