#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    //constructor
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1,Node*next1){
        data = data1;
        next =next1;
    }
};

Node* convert(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void print(Node*head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//inserting at head
Node* insertHead(Node*head , int val){
    Node* insert = new Node(val,head);
    if(head==NULL){
        return insert;
    }
    head = insert;
    return head;
}

//inserting at tail
Node* insertTail(Node*head , int val){
    Node* insert = new Node(val);
    if(head==NULL){
        return insert;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = insert;
    return head;
}

//inserting at nth number
Node* insertNth(Node*head , int val,int n){
    Node* insert = new Node(val);
    if(head == NULL){
        if(n==1){
            return insert;
        }
        else{
            return head;
        }
    }
    if(n==1){
        Node * temp = head;
        insert->next = temp;
        return insert;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == n-1){
            insert->next = temp->next;// Here first we are pointing the insert and then we point temp to insert because if we directly insert temp to insert we loss the address of remaining LL
            temp->next = insert;
        }
        temp = temp->next;
    }
    return head;

}

//inserting element before the given value 
Node* insertBefX(Node*head , int el  , int val){
    Node* insert = new Node(el);
    if(head==NULL){
        return head;
    }
    if(head->data == val){
        return new Node(el,head);
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->next->data == val){
            insert->next = temp->next;
            temp->next = insert;
            break;
        }
        temp = temp->next;
    }
    return head;

    
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = convert(arr);
    print(head);
    // head = insertHead(head,6);
    // cout<<"after insertion"<<endl;
    // cout<<"Now head is "<<head->data<<endl;
    // print(head);
    // head = insertTail(head,6);
    // cout<<"after insertion"<<endl;
    // cout<<"Now head is "<<head->data<<endl;
    // print(head);
    // head = insertNth(head,8,6);
    // cout<<"after insertion"<<endl;
    // cout<<"Now head is "<<head->data<<endl;
    // print(head);
    head = insertBefX(head,6,5);
    cout<<"after insertion"<<endl;
    cout<<"Now head is "<<head->data<<endl;
    print(head);
}