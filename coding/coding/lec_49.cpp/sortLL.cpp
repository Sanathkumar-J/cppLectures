#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//Approach 1
Node* sortList(Node *head){
    int ZeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data==0){
            ZeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(ZeroCount != 0){
            temp->data = 0;
            ZeroCount--;            
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
            
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
            
        }
        temp = temp->next;
    }
    return head;
}

//Approach 2
void InsertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;
    

    while(curr != NULL){
        int value = curr->data;
        if(value == 0){
            InsertAtTail(zeroTail,curr);
        }
        else if (value == 1){
            InsertAtTail(oneTail , curr);
        }
        else if(value == 2){
            InsertAtTail(twoTail , curr);
        }
        curr = curr->next;
    }

    //merging 3 Linked lists

    if(oneHead -> next == NULL){
        zeroTail -> next = twoHead->next;
    }
    else{
        zeroTail->next = oneHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //setting head
    head = zeroHead->next;

    //deleting dummy Nodes
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    return head;
}
/* approach 2 is taking dummy nodes and merging them and deleting dummy nodes at last At the tym of merging zero tail will be pointed to next of onehead
if next of one head is null that means linked list containing one is having no elements so I pointed zerotail next to directly two head's next*/
/*Tc for above both is O(N) and SC is O(1)*/
int main(){

}