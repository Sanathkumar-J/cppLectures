//linear search
#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target, int row, int col){
    for(int row = 0;row<3;row++){
        for(int col = 0;col<4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int target;
    cin>>target;
    int arr[3][4] ={{1,2,3,4},{5,6,7,8},{9 ,10,11 ,12}};
    if(ispresent(arr,target,3,4)){
        cout<<"vundhi bro";
    }
    else{
        cout<<"ledhu bro";

    }

}