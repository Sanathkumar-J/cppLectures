#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row  = 1;
    
    while(row<=n){
        int stars = n - row ;        //may be the hardest one 
        while (stars){
            cout << "*";
            stars = stars - 1;
            }
        int col = 1;
        while(col<=row){
            cout<<" ";
            col = col + 1;
            

        }
        cout<<endl;
        row = row + 1;

    }
}