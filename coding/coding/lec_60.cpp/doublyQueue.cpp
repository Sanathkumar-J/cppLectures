#include<iostream>
// #include<queue>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = 1;
    }

    void pushFront(int x){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue is full";
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
    }

    void pushBack(int x){
        if(isFull()){
            cout<<"Can't add elements, Queue is already full";
            return;
        }
        else if(isEmpty()){
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
    }

    void popFront(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }
        if(front == rear){//here both will be zereos
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;//to maintain cyclic nature
        }
        else{//normal flow
            front++;
        }
    }

    void popRear(){
        if(isEmpty()){//checking whether queue is empty or not
            cout<<"Queue is empty";
            return;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0 ){
            rear = size - 1;
        }
        else{//normal form
            rear--;
        }

    }

    int  getFront(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int  getRear(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return arr[rear];
            
        }
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if((front == 0 && rear == size-1) || (front != 0 && (rear == (front - 1)%(size - 1)))){
            return true;
        }
        else{
            return false;
        }
    }


};

int main(){
    Deque d(5);
    // deque<int> d;
    d.pushFront(16);
    d.pushBack(5);
    cout<<"front element is "<<d.getFront()<<endl;
    cout<<"Last element is "<<d.getRear()<<endl;
    d.popFront();
    cout<<"front element is "<< d.getFront()<<endl;
    cout<<"Last element is "<< d.getRear()<<endl;
    // d.pop_back();
    if(d.isEmpty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

}