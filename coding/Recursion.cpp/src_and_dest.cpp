#include<iostream>
using namespace std;

void reachhome(int src , int dest){
    //Base condition
    cout<<src<<endl;
    if(src==dest){
        cout<<"reached";
        return ;
    }

    src++;
    reachhome(src,dest);
}

int main(){
    int start = 0;
    int end = 10;
    reachhome(start,end);

}