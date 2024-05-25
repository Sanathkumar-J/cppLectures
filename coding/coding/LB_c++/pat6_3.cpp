#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int row = 1;
    //int count = row;
    while(row <= n){
        int col = 1;
        int count = row;
        while(col <=row){
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}

//for doing without count we have to use the while  condition for col as(col<2*row) and output as "col" and as well as change int col = row 