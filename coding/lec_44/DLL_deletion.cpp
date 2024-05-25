#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:     
    int data;
    Node* back;
    Node* next;

    //constructor
    public:
    Node(int data1,Node*prev1,Node*next1){
        data = data1;
        back = prev1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        back = nullptr;
        next = nullptr;
    }
};

//converting array to doubly LL

Node* convert(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],prev,nullptr);//initailising or connecting temp with previous one
        prev->next = temp;//connecting previousone with temp
        prev = prev->next;
    }
    return head;    
}

//printing DLL
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;    
}

//deleting of head
Node* deleteHead(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

//deleting tail of DLL
Node* deleteTail(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next == nullptr){
        delete head;
        return NULL;
    }
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

//deleting kth element in DLL
Node* deleteKth(Node* head, int k){
    if(head == NULL){
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    if(front == NULL){
       return deleteTail(head);
    }
    if(prev == NULL){
        return deleteHead(head);
    }
    else{
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        return head;
    }
}

//deleting Node except the node of 1st element

void deleteNode(Node* temp){
    Node *prev = temp->back;
    Node* front = temp->next;

    //case 1 - node of tail element
    if(front==NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    } 
    
    //except first case
    else{
        prev->next = front;//which means temp.next
        front->back = prev;
        //equating temp with nullptr
        temp->back = temp->next = nullptr;
        delete(temp);

    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = convert(arr);
    // print(head);
    // head = deleteHead(head);
    // print(head);
    // head = deleteTail(head);
    // print(head);
    // head = deleteKth(head,2);
    // print(head);
    deleteNode(head->next->next);//deletes 3rd element
    print(head);

}