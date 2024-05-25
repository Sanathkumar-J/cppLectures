#include<iostream>
#include<stack>
using namespace std;


/* Approach: First step is to take the top varaible out and assinging to a variable, deleting top
and then reversing the  stack which is left 
For reversing stack:
assign Top of stack to a variable and delete top Continue this proceess till top becomes empty after it becomes empty return it
and insert the assigned top values at bottom*/
void insertAtBottom(stack<int> &stack, int &element){
    //basecase
    if(stack.empty()){
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    //Recursive call
    insertAtBottom(stack, element);
    stack.push(num);

}

void reverseStack(stack<int> &stack) {
    //basecase
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();
    //Recursive call
    reverseStack(stack);
    insertAtBottom(stack,num);
    
}

int main(){

}

