#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* arb; //arb-a random b

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        arb = NULL;
    }
};

//APPROACH 2:
/*step 1: Create a clone List
step 2: add clone Nodes in between original Lists
step 3: Copying random pointer in clone List(cloneHead->random = temp->random->next)
step 4: Revert changes done in step 2 (as cloneList and original Lists are linked with each other we require to delete originalList form it)
step 5: Return ans;(CloneList->head)
*/


void insertAtTail(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = head;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}


    
    
Node *copyList(Node *head)
{
    //step 1: Create a clone List
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
      
    //step 2: Add cloneNodes in between originalNodes
    Node* cloneNode = cloneHead;
    Node* originalNode = head;
    while(originalNode != NULL && cloneNode != NULL){
        //linking originalNode with cloneNode
        Node* next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;
        
        //Linking cloneNode with originalNode
        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
        
    }
    //Step 3: copy random Pointer
    Node* tem = head;
    while(tem != NULL){
        if(tem->next != NULL){
            if(tem -> arb != NULL){
                tem->next->arb = tem->arb->next;
            }
            else{
                tem->next->arb = NULL;
            }
        }
        tem = tem->next->next;
    }
      
    //step 4: revert changes done in step 2
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode != NULL){
        //removing link with clone Node and linking original Node with it previous original links
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        
        //removing links of clone Nodes with originalNdoes
        if(originalNode != NULL){//may be there is a chance that original node would be null as we made (originalNode = originalNode->next) above this line
        cloneNode->next = originalNode->next;
        cloneNode = cloneNode->next;
        }
        
    }
      
    //step 5: return ans;
    return cloneHead;
}
   