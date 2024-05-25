#include<iostream>
#include<stack>
using namespace std;

/*if string is like [({})] or something ofthat then it is valid  or else it is not valid
Approach: Create Stack of char type and iterate in string if string contains open bracket then push it if it is closed bracket , 
give some variable name top and stor top compare top with this closed bracket if it matches pop the top and if it doesnt return true
at last outside the loop if stack becomes empty then return true else return false
*/

bool isValidParenthesis(string expression)
{
    stack<char>s;
    for(int i=0; i<expression.length();i++){
        char ch = expression[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{

            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[' )){
                    s.pop();
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
        }

    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){

}