/*Circular Linked list
Here last Node(tail) points to first Node(head)*/

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data1){
        data = data1;
        next =  NULL;
    }

    //destructor
    
};

void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        
        //element found curr representing that element
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail , int value){
    //empty list
    if(tail == NULL){
        cout<<"list is empty please check once again";
        return;
    }
    else{//Non empty list
        Node* prev = tail;
        Node* curr = tail->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //for one Node linked list
        if(curr == prev){  //here since it has only one element curr equals prev and deletes whole LL cant give the op tail so tail is modified as null
            tail = NULL;
        }
        //for more tham ome mode  linked list
        else if(tail == curr){
            tail = prev;
        }
        
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* tail = NULL;
    insertNode(tail,4,1);
    print(tail);
    insertNode(tail,1,2);
    print(tail);
    insertNode(tail,2,3);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,4,5);
    print(tail);
    //deleting 4 from LL
    deleteNode(tail,5);
    print(tail);
}
