#include<iostream>
#include<stack>
using namespace std;

/*Approach: iterate the string if open bracket"(" or any symobols like +,-,*,/ comes just push them in to stack
if closed bracket ")" comes then make one bool and assign it true now iterate the stack until top is equal to open bracket 
If there is any data symbol +,*,/,- arrives in between make that bool as false as it was not reduntant or else keep that bool as same 
at last return the false*/
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        char ch =s[i];
        
        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else
        {
            //ch ya toh ')' hai or lowercase letter
            
            if(ch == ')') {
                bool isRedundant = true;
                
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                
                if(isRedundant == true)
                    return true;
                st.pop();
            }
            
        } 
    }
    return false;
}


int main(){

}
