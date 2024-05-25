#include<iostream>
using namespace std;


class KQueue{

    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    public:
    KQueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for(int i=0; i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        
        next = new int[n];
        for(int i=0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
        freeSpot = 0;
    }

    void push(int data, int qn){
        //checking overflow
        if(freeSpot == -1){
            cout<<"No empty space is present";
            return;
        }

        //find first free index
        int index = freeSpot;

        //update freespot
        freeSpot = next[index];

        //check whether first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            //linking new element to prev element
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //pushelement
        arr[index] = data;
    }

    int pop(int qn){
        //checking queue underflow
        if(front[qn-1] == -1){
            cout<<"Queue Underflow "<<endl;
            return -1;
        }
        //find index to pop
        int index = front[qn-1];

        //update front
        front[qn-1] = next[index];

        //manage free spots
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

};



int main(){

    KQueue q(10,3);
    q.push(5,1);
    q.push(6,1);
    q.push(7,2);
    q.push(8,1);

    cout<<q.pop(1)<<endl;
    cout<<q.pop(2)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(1)<<endl;
    
}