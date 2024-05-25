#include<iostream>
using namespace std;

void reverse(int s,int e,string& str){
    cout<<str<<endl;
    if(s>e){
        return;
    }

    swap(str[s],str[e]);
    s++;
    e--;
    return reverse(s,e,str);//recursive call

}

int main(){
    string str = "Teju";
    int s = 0;
    int e = 5;
    reverse(s,str.length()-1,str);
    cout<<str;
}