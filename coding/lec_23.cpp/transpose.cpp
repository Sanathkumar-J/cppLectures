#include<iostream>
using namespace std;

void transpose(int arr[][3],int row,int col){
    for(int i= 0;i<row;i++){
        for(int j = 0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }

    }
    return;
}
void swapping(int arr[][3],int row,int col){
    for(int i =0;i<col;i++){
        swap(arr[i][0],arr[i][col-1]);
    }

}

int main(){
    int m = 3;
    int n = 3;
    int arr1[m][3] = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(arr1,m,3);
    for(int i =0;i<m;i++){
        for(int j = 0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    swapping(arr1,m,3);
    for(int i =0;i<m;i++){
        for(int j = 0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    

}