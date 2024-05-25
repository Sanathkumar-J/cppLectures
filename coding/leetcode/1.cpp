#include<iostream>
using namespace std;

int find(int arr[],int s,int e){
    int start = arr[s];
    int i = 0;
    int count = 0;
    while( arr[i] = start && s<=e ){
        count++;
    }
    return count;
}
int solution(int arr[],int s,int e){
       
    int solve = find(arr,s,e);
    int newind = solve+1;
    solution(arr,newind,e);

}
int main(){

}






