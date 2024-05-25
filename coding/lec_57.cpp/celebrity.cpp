#include<iostream>
#include<vector>
#include<stack>
using namespace std;

/*Approach: It is 2d matrix we have to know who is the celebrity in it two things we know 1.All knows celebrity
2. Celebrity knows no one
That means in column of celebrity all will be 1s and in row of celebrity all will be 0s
for ex: 
   0 1 2
{0{0 1 0},
 1{0 0 0}, 
 2{0 1 0}}
 in above matrix 1 is celebrity because 1 knows no one but all knows one
 to know that 
 Approach1:(bruteforce) use 2 loops and find the elemnt's row and column so that row should contains all 0s aand column contains all 1s 
 except its own row and if there is no element exists like that return -1; TC = O(N^2)

 Approach2: use stack ,insert all no. of rows or columns in stack ex. for 3*3 MAtrix stack should be like (0,1,3) irrespective of order
 Now by while loop make stack only one element so that that element should be expected celebrity. for ex: a,b,c are 
 elements in stack if I will take 2  elements at a time 
 step1: a,b is take assuming a knows b but b is not knowing a so pop a and push b in that stack now stack contains only
 b and c now,assuming b knows c but c is not knowing b now pushback c in stack c will be expected celebrity
 Now,at last check the NO.of 0s in C row it should be n and no. of 1s in c column it should be n-1 now if it satisfies
 the no.of zeroes and ones then return the C. else return -1

 
*/

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b){
        if(M[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i = 0;i<n;i++){
            s.push(i);
        }
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        //s.top() may be the celebrity
        int ans = s.top();
        int zeroCount = 0;
        
        for(int i = 0;i<n;i++){
            if(M[ans][i] == 0){
                zeroCount++;
            }
        }
        if(zeroCount != n){
            return -1;
        }
        
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][ans] == 1){
                oneCount++;
            }
        }
        
        if(oneCount != n-1){
            return -1;
        }
    
    return ans;
    }
};