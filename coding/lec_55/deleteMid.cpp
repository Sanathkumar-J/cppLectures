#include<iostream>
#include<stack>
using namespace std;

/*Approach: traversing into loop and storing the value of it as num every time and deleting it 
when the count reaches size/2 it won't store it directly deletes and returns then by return of recursive calls the removed elements
which are stored as num will be added*/
void solve(stack<int>& inputStack,int count,int size){
   //basecase
   if(count == size/2){
      inputStack.pop();
      return;
   }

   //Storing the stack then deleting it so that we can add at last after deleting mid stack  
   int num = inputStack.top();
   inputStack.pop();

   //Recursive call
   solve(inputStack,count+1,size);
   
   //adding element that put a side(num)
   inputStack.push(num);


}

void deleteMiddle(stack<int>&inputStack, int N){
	int count = 0;
   solve(inputStack, count, N);
   
}

int main(){

}