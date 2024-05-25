#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data1){
        data = data1;
        next = NULL;
    }

};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    //new Node creation
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPostition(Node*  &head,Node* &tail,int pos,int d){

    //inserting at start
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* toInsert = new Node(d);
    toInsert->next = temp->next;
    temp->next = toInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//To find given LL is circular or not
bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        cout<<"list is empty";
        return true;
    }

    Node* temp = head->next;
    while((temp != NULL) && (temp != head)){
        temp = temp->next;
    }
    if(temp == NULL){
        return false;
    }
    return true;
}

//To detect whether the loops are present in LL or not
bool detectLoop(Node* head){
    
    if(head == NULL){
        return NULL;
    }

    map<Node*,bool>visited;
    Node* temp = head;
    while(temp != NULL){
        //cycle is present
        if(visited[temp] = true){
            cout<<"present on element "<<temp->data<<endl;
            return true;
        }
        else{
            visited[temp] = true;
        }
        temp = temp->next;
    }
    return false;

}

//floyd's cycle detection algo:
Node* floyDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    while(slow!=NULL && fast!=NULL ){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout<<"loop is present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
       
}
/*Tc for above is O(N)
SC is O(1)*/

//To find starting Node of loop

Node* startingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floyDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

//To remove loop from LL
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = startingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;    
}

int main(){
    Node* node1 = new Node(10);
    Node*head = node1;
    Node* tail = node1;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtPostition(head,tail,4,22);
    print(head);
    tail->next = head->next;
    // if(detectLoop(head)){
    //     cout<<"loop is present"<<endl;
    // }
    // else{
    //     cout<<"No loop is present"<<endl;
    // }
    // if(floyDetectLoop(head)){
    //     cout<<"loop is present"<<endl;
    // }
    // else{
    //     cout<<"No loop is present"<<endl;
    // }

    Node* loop = startingNode(head);
    cout<<"loop starts at "<<loop->data<<endl;
    removeLoop(head);
    print(head);
 

}
