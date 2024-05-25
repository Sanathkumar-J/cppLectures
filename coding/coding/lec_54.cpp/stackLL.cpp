#include<iostream>
#include<stack>
using namespace std;

class NodeStack{
    public:
    int data;
    NodeStack* next;
    

    //behaviour
    NodeStack(int data1){
        data = data1;
        next = NULL;
    }

    
};

void push(NodeStack*&head, int d){
    NodeStack* insert = new NodeStack(d);
    if(head == NULL){
        head = insert;
        return;
    }
    NodeStack* temp = head;
    insert->next = temp;
    head = insert;
    
}

void pop(NodeStack* &head){
    if(head == NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    NodeStack* temp = head;
    head = temp->next;
    delete(temp);
}

void peek(NodeStack* &head){
    if(head == NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    else{
        cout<<head->data<<endl;
    }    
}

bool isempty(NodeStack* head){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    NodeStack* temp = new NodeStack(-1);
    pop(temp);
    push(temp,6);
    push(temp,7);
    peek(temp);
    pop(temp);
    peek(temp);
    if( isempty(temp)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    
}