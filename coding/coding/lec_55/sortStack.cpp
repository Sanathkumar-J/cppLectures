#include<iostream>
#include<stack>
using namespace std;


/*Approach: Sorted Insert is the recurrsive alog if top od the elemts is less than given num then we insert the num in the
stack or else we go on storing until stack becomes empty and add the element and return*/
void sortedInsert(stack<int> &s, int num){
	//basecase
	if(s.empty() || (!s.empty() && s.top() < num)){
		s.push(num);
		return;
	}

	int n = s.top();
	s.pop();

	//recursive call
	sortedInsert(s,num);
	s.push(n);

}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);
	sortedInsert(stack,num);
}

int main(){

}