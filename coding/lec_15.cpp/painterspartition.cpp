#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int m,int mid){

    int paintercount = 1;
    int unitsum = 0;

    for(int i = 0;i<n;i++){
        if (unitsum + arr[i] <= mid){
            unitsum += arr[i];
        }

        else{
            paintercount++;
            if(paintercount>m || arr[i]>mid){
                return false;
            }
            unitsum = 0;
            unitsum += arr[i];

        }
    }
    return true;



}

int allocatepaint(int arr[],int n,int m){//m is no.of painters;

    int s = 0;
    int e = 0;
    int sum = 0;
    for (int i = 0; i<n;i++){

        sum += arr[i];

    }

    e = sum;
    int mid = s +(e-s)/2;
    int ans = -1;

    while(s<e){

        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;

        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;


    }
    return ans;

}

int main(){

    int arr[] = {1,5,5,5,5};
    cout<<allocatepaint(arr,5,3);
}

