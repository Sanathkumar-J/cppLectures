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
    Queue(int size1){
        size = size1;
        arr = new int(size);
        front = 0;
        rear = 0;
    }

    void push(int element){
        if(rear < size){
            arr[rear] = element;
            rear++;
        }
        else{
            cout<<"queue is full"<<endl;
        }
    }

    void pop(){
        if(rear - front > 0){
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
        else{
            cout<<"queue is empty"<<endl;
        }
    }

    bool isempty(){
        if(rear - front == 0){
            return true;
        }
        else{
            return false;
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

    q.pop();
    q.getFront();

    q.pop();
    q.pop();
    q.pop();

    q.getFront();

    q.pop();
    q.getFront();
    q.pop();



}