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

//Approach 1
int getLength(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void getMiddle(Node* head){
    Node* temp = head;
    int length = getLength(head);
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt == (length/2)+1){
            cout<<temp->data;
            break;
        }
        temp = temp->next;
    }
    cout<<endl;
    
}

//Approach 2
Node* Middleman(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int main(){
    vector<int>arr = {1,2,4,5};
    Node* head = convert(arr);
    getMiddle(head);
    Node* ans = Middleman(head);
    cout<<ans->data;
}

/*Tc - O(N)*/

