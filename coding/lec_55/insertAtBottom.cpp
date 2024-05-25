#include<iostream>
#include<stack>
using namespace std;


/*Approach: First make a variable as num and assign the top of stack in that and pop it continue it until stack become empty
once it become empty just push the given integer to stack and return then recursion ends when it returns it add
those numbers which are stored int variable then return the stack  */
void solve(stack<int>& s, int x){
    //basecase:
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //Recursive call
    solve(s, x);
    s.push(num);
        
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;

}

int main(){

}