#include<iostream>
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

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //previous level traversed completely
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }

    }
    
}

int main(){

    Node* root = NULL;

    //Creating a tree
    root = buildTree(root);

    //input Nodes : 7,6,7,8,-1,-1,-1,-1,,5,-1,-1
    levelOrderTraversal(root);


}