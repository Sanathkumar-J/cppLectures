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

    //destructor
    
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

int main(){

}