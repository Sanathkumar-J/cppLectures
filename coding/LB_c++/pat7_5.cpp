#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row  = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
        char ch = 'A'+row+col-2;//see in notes that how it is derived 
        cout<<ch<<" ";
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    }
}