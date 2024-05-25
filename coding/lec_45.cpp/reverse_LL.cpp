#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    public:
    Node(int data1){
        data = data1;
        next = NULL;
    }

};


Node* convert(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1;i<arr.size();i++){
        Node* insert = new Node(arr[i]);
        temp->next = insert;
        temp = temp->next;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

//Recursive solution

Node* reverseLL(Node* head){
    //basecase
    if(head == NULL || head->next == NULL){
        return head;
    }

   
    Node* chota = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return chota;

}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = convert(arr);
    print(head);
    head = reverseLL(head);
    print(head);

}  