//getMin() in O(1) time and O(1) extra space

#include<iostream>
#include<stack>
using namespace std;

/*Approach: make one int mini and stack s now while pushing into it if stack is empty then directly push element and 
assign that element as mini if stack is not empty push (2* data - mini) to stack and assign mini = data 
for pop if element is greter than mini directly pop it if it is less tham mini pop (2*mini-curr) in this curr = s.top()
to get top if curr less than mini that means that is the place of mini (as we manipulated the value while pushing) so return mini
if curr > mini then directly return mini
Now for getmin() directly return mini*/

class SpecialStack {
    //Defining the data members
    stack<int>s;
    int mini;
    public:
       
    void push(int data) {
        if(s.empty()){
           s.push(data);
           mini = data;
        } 
        else{
            if(data < mini){
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    int  pop() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        s.pop();
        if(curr > mini){
            return curr;
        }
        else{
            int prevMin = mini;
            int val = 2*mini-curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr < mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isempty(){
        return s.empty();
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};

int main(){

}