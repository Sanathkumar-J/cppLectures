#include<iostream>
using namespace std;

int main(){
  /*  //row wise input
    int arr[3][4];
    for (int row = 0;row<3;row++){
        for(int col = 0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    for (int row = 0;row<3;row++){
        for(int col = 0;col<4;col++){
            cout << arr[row][col]<<" ";
        }
        cout<<endl;
    }*/
/*by above loop we will get op as 
1234
5678
9 10 11 12
which means row wise
*/

//col wise input
    int arr[3][4];
    for (int col = 0;col<4;col++){
        for(int row = 0;row<3;row++){
            cin>>arr[row][col];
        }
    }
    for (int col = 0;col<4;col++){
        for(int row = 0;row<3;row++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    /*by above loop we will get op as 
1 4 7 10
2 5 8 11
3 9 6 12

which means row wise
*/

// and also we can declare array as:

    int arr[3][4] ={{1,2,3,4},{5,6,7,8},{9 ,10,11 ,12}};
}  