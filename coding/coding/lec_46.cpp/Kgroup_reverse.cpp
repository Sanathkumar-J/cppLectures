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

Node* kreverse(Node* head, int k){
    //basecase
    if(head == NULL || head->next == NULL){
        return head;
    }

    //step1: reverse first k nodes
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 0;
    while(curr!=NULL && cnt<k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    //step 2: Recursion
    if(forward != NULL){
        head->next = kreverse(forward,k);
    }
    return prev;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    Node* head = convert(arr);
    //original LL
    print(head);
    Node* prev = kreverse(head,4);
    //reversed LL
    print(prev);
}


