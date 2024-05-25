#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/* Approach1: By using 2 for loops we can find the next smaller
number but the TC will be O(N^2) 
Approach2: To reduced TC to O(N) stack is used 
Step1: take stack and push -1 because we iterate the arr from right to left so last 
element will not be having next smaller element so i added -1 to stack.
step2: Iterate array from last to first. In an iteration first take last num of array
compare with stack elements until the top of stack is less than the element then add 
that element in ans vector also add that element in stack so that it is used to compare with
other elements in array   */


#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);

    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        //top will be the first lowest of curr
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}


vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	stack<int>s;
	s.push(-1);
	vector<int>ans(n);

	for(int i = n-1; i>=0; i--){
		int curr = arr[i];
		while((s.top() < curr) && (!s.empty())){
			s.pop();
		}
		if(s.empty()){
			s.push(-1);
		}
		
		ans[i] = s.top();
		s.push(curr);
		

	}
	return ans;
}