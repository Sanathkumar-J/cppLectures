#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//APPROACH 1 - Using stack
queue<int> reverse(queue<int>q){
    stack<int>s;
    //pushing all elements to stack and deleting in queue;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    //Now pushing all elements from stack top to bottom in queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}

//APPROACH 2 : Using Recursion
queue<int> reverseQueue(queue<int>q){
    //basecase
    if(q.empty()){
        return q;
    }
    int insert = q.front();
    q.pop();

    //Recursive call
    q = reverseQueue(q);
    q.push(insert);
    
    return q;
}

int main(){

}

