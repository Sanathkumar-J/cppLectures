#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* back;
    Node* next;

    //constructor
    public:
    Node(int data1){
        data = data1;
        back = nullptr;
        next = nullptr;
    }

    Node(int data1 , Node*back1,Node*next1){
        data = data1;
        back = back1;
        next = next1;
    }
};

//converting arr to DLL
Node* convert(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev= head;
    for(int i =1;i<arr.size();i++){
        Node *temp = new Node(arr[i] , prev , nullptr);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

//printing the DLL
void print(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


//inserting value before head
Node* inserthead(Node* head , int value){
    Node* newhead = new Node(value,nullptr,head);
    head->back = newhead;
    return newhead;
}

//iserting before tail

Node* insertBeforeTail(Node* head , int val){
    //single element
    if(head->next == NULL){
        return inserthead(head,val);
    }
    
    //morethan single element
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val,prev,tail);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

//inserting befor kth element

Node* insertBeforeKth(Node* head, int value , int k){
    
    if(k==1){
        return inserthead(head,value);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(value,prev,temp);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

//inserting before given node except 1st element node
void insertBefNode(Node* node , int val){
    Node* prev = node->back;
    Node* newNode = new Node(val,prev,node);
    prev->next = newNode;
    newNode->back = newNode;
} 



int main(){
    vector<int>arr = {1,2,3,4,5};\
    Node* head = convert(arr);
    print(head);
    Node* newhead = inserthead(head,6);
    print(newhead);
    // head = insertBeforeTail(head,8);
    // print(head);
    // head = insertBeforeKth(head,9,1);
    // print(head);
    insertBefNode(head->next,9);
    print(head);
}