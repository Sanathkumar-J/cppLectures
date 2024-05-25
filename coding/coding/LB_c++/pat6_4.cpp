#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int row = 1;
     
    while(row <= n){
        int col = 1;
        int count = 1;
        while(col <=row){
            cout<<row - col + 1<<" ";//i-j+1  for getting n first we use n-j+1
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}