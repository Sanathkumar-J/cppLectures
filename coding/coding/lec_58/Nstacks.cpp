  #include <bits/stdc++.h> 
class NStack
{
    int* arr;
    int* top;
    int* next;
    int freespot;
    int s,n;

public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        //intialising top
        for(int i=0; i<n; i++){
            top[i] = -1;
        }

        //intialising next
        for(int i=0; i<s; i++){
            next[i] = i+1;
        }
        //updating last index value to -1
        next[s-1] = -1;

        //initialising freespot
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //checking for overflow
        if(freespot == -1){
            return false;
        }
        //finding index to insert
        int index = freespot;

        //updating freespot
        freespot = next[index];

        //inserting element in array
        arr[index] = x;

        //update next
        next[index] = top[m-1];

        //updating top
        top[m-1] = index;

        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //checking for underflow condition
        if(top[m-1] == -1){
            return -1;
        }

        //finding index to pop
        int index = top[m-1];

        //Updating top
        top[m-1] = next[index];

        //updating next
        next[index] = freespot;

        //updating freespot
        freespot = index;

        return arr[index];
    }
};