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

//Approch 1:
/*First step is to converting LL to vector and checking whether the LL is palindrome or not
Tc is O(N)
Sc is O(N) as it stores linked list*/


bool checkpalindrome(vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
    
    
//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    vector<int>ans;
    Node* temp = head;
    while(temp != NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
    return checkpalindrome(ans);
    

}

//APPROACH 2
/* First thing is to get Mid of Linkedlist and 
Step2 is to reverse the elements which are after the Mid in Linked list
Step 3 is to Comparing both halfs 
step4 is to repeat step 2 to set the Linked List as same as before */

  
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
  
//Function to check whether the list is palindrome.
bool isItPalindrome(Node *head)
{
    if(head->next == NULL){
        return true;
    }
    
    //step1: Find Middle
    Node* Middle = getMid(head);
    
    //step2: reverse the LL after Middle
    Node* temp = Middle->next;
    Middle->next = reverse(temp);
    
    //step 3: Compare both halfs
    
    Node* head1 = head;
    Node* head2 = Middle->next;
    
    while(head2 != NULL){
        if(head1 ->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    //step 4: Repeat Step 2
    temp = Middle->next;
    Middle->next = reverse(temp);
    return true;
    
}
