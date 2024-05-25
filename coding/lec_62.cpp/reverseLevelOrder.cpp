#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Node{
    
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


Node* buildTree(Node* root){

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"data for inserting left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"data for inserting right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;

}


void reverseLevelOrder(Node* root){

    queue<Node*>q;
    
    
}


int main(){

    Node* root = NULL;
    root = buildTree(root);

}