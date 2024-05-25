#include<iostream>
#include<vector>
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

//APPROACH - Finding mid and sorting elements that are before and after the mid and then meriging the both right and left part of mid

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp =ans;
    
    //merging two sorted LL
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
           
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
            
        }
    }
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node* mergeSort(Node *head) {
    //basecase
    if(head == NULL || head->next==NULL){
        return head;
    }

    //break LL to two halves after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    //recursive calls 
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both right and left halves
    Node* result = merge(left,right);

    return result;

}



Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp =ans;
    
    //merging two sorted LL
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
           
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
            
        }
    }
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node* sortList(Node* head){
    //basecase
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* mid = getMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    //recursive calls
    left = sortList(left);
    right = sortList(right);

     
    Node* result = merge(left,right);
    return result;

}

int main(){
    vector<int>arr = {1, 9, 2, 8, 3, 7, 4};
    Node* head = convert(arr);
    head = mergeSort(head);
    Node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

