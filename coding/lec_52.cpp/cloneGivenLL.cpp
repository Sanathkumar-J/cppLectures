#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* arb;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        arb = NULL;
    }
};

//Approach 1 : create a clone List and then map the random values of original list with clone list for map it takes SC = O(N) and TC = O(N)

void insertAtTail(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = head;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
   

Node *copyList(Node *head){

    //step1 : create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    
    Node* temp = head;
    
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    
    //step2: create a map
    unordered_map<Node*, Node*>oldToNewNode;
    
    Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode != NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
        
    }
    
    originalNode = head;
    cloneNode = cloneHead;
    
    while(originalNode != NULL){
        cloneNode->arb = oldToNewNode[originalNode->arb];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}    






