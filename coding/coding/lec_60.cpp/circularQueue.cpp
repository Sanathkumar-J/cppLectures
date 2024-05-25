//only push operation changes in circular queue

#include<iostream>
#include<queue>
using namespace std;

class Queue{
    //properties
    public:
    int *arr;
    int size;
    int front;
    int rear;

    //behaviour
    public:
    Queue(int n){
        size = n;
        arr = new int(size);
        front = -1;
        rear = -1;
    }

    void push(int element){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue is full";
            return;
        }
        
        else if(front == -1){//first element to push
                front = rear = 0;
                arr[rear] = element;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = element;
        }
        else{
            rear++;
            arr[rear] = element;
        }
    }

    bool isempty(){
        if(front == -1 ){
            return true;
        }
        else{
            return false;
        }
    }

    void pop(){
        if(front == -1){
            cout<<"Queue is empty "<<endl;
            return;
        }
        if(front == rear){//Single element is present
            front = rear = -1;
        }
        else if(front == size -1){
            front = 0;//To maintain cyclic nature
        }
        else{
            front++;
        }
        
    }

    

    void getFront(){
        if(!isempty()){
            cout<<"Front element is "<<arr[front]<<endl;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
    }
};

int main(){

    Queue q(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    q.getFront();

    q.pop();
    q.pop();
    q.pop();

    q.getFront();

    q.pop();
    q.pop();
    q.pop();
    q.getFront();
    



}