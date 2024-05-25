#include<iostream>
#include<deque>
#include<vector>
using namespace std;


/*First negative integer in every window of size k:
FIrst step: Create one deque (dq) and also create one vector(ans) then  traverse K elements  in given array , Our target is to get first 
negative integer in that window so if the value is less than 0 then pushback its index in deque (why index? look at the code
it helps to add in ans vector and compare indexes while removing first element and adding another element- to get next
window) Now add A[dq.front()] to ans so that it stores all first negative integers if no first element just add 0.
Next just do this same for remaining windows   */
 
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    vector<long long>ans;
    deque<long long>dq;

    for(int i=0; i<K; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    //for remaining windows
    for(int i=K; i<N; i++){
        //removing first element of deque to maintain k elements and get next window
        if(!dq.empty() &&  i-dq.front()>=K){
            dq.pop_front();
        }
        if(A[i] < 0){
            dq.push_back(i);
        }
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}



int main(){

}