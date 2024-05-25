#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*next;


    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data2,Node*next1){
        data = data2;
        next = next1;
    }

};

//converting array to LL
Node* Filllink(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node*mover = head;
    // cout<<head->data<<" ";
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        // cout<<temp->data<<" ";
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//printing linkindlist
void print(Node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
  
//deleting head
Node* removehead(Node*head){
    if(head==NULL){
        return head;
    }
    Node*temp = head;
    head = head->next;
    delete temp;
    return head;
}

//deleting tail
Node* removetail(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
    
}

//deleting nth element from LL
Node* deletek(Node*head,int k){
    
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node*temp = head;
    Node*prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

//deleting based on value
Node* delvalue(Node* head, int val){
    if(head == NULL){
        return head;
    }
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node*temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        if(temp->data==val){
            prev->next = prev->next->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = Filllink(arr);
    // cout<<head->data<<endl;
    // print(head);
    // Node* ans = removehead(head);
    // print(ans);
    // cout<<ans->data;
    // head = removetail(head);
    // cout<<head->data<<endl;
    // head = deletek(head,4);
    // print(head);
    head = delvalue(head,22);
    print(head);
};


