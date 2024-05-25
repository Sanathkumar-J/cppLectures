#include<iostream>
#include<stack>
using namespace std;


/*Approach: To find whether the string of brackets are valid are not 
step1: if string length is odd then definately one bracket will be left after pairing all remaining brackets 
So if length is odd return -1
step2: if the length is odd first iterate the string if open bracket comes then push it in to stack if close bracket comes 
then see whether top of the stack containing the open bracket or not 
if it contains '{' then pop it if the stack is empty or it doesnot have its top as open bracket then push this close bracket in to top
Now to know operations required now we need to find the no. of open brackets({) make it as b and  closed brackets (})
as a and the no. operations required will be (a+1)/2 + (b+1)/2*/

int findMinimumCost(string str) {
  if(str.length() % 2 != 0){
    return -1;
  }

  stack<char>s;

  for(int i = 0;i<str.length();i++){
    char ch = str[i];
    if(ch == '{'){
      s.push(ch);
    }
    
    else{
      if(!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }

  int countA = 0;
  int countB = 0;
  while(!s.empty()){
    if(s.top() == '{'){
      countA++;
    }
    else{
      countB++;
    }
    s.pop();
  }
  int ans = (countA+1)/2 + (countB+1)/2;
  return ans;
  
  
}

int main(){

}