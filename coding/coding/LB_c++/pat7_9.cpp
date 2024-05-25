#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row  = 1;
    
    while(row<=n){
        int col = 1;
        char start = 'A'+n-row;//this formula suits the first colomn by this formula we can also do // A B C
        while(col<=row){                                                                            // B C D
            cout<<start;                                                                             //C D E  
            start = start + 1;
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
       
}  

}