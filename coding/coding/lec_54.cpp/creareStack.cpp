#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //properties
    public:
        int *arr;
        int top;
        int size;
    
    //behaviour
    Stack(int size1){
        size = size1;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 0){
            top++;
            arr[top] = element;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};


int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek();

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

}
