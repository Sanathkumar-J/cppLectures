//to make the distance between cows maximum and use sorted array for stalls

#include<iostream>
#include<math.h>
using namespace std;

bool ispossible(int stalls[],int n,int k, int mid){
    int cowcount = 1;
    int firstposition = stalls[0];
    int lastposition = stalls[0];
    for(int i = 0; i<n; i++){
     
    if(stalls[i]-lastposition>=mid){

        cowcount++;
        lastposition = stalls[i];

        if(cowcount==k){
            return true;
        }
        lastposition = stalls[i];


    }

    }
    return false;
    
    
}

int aggressivecows(int stalls[],int n ,int k){// k is no.of cows

    int s = 0;
    int maxi = -1;
    for (int i = 0; i<n ; i++){
        maxi = max(maxi,stalls[i]);
    }

    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(ispossible(stalls,n,k,mid)){

            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        } 
        mid = s + (e-s)/2;   
    } 
    return ans;
}

int main(){

    int stalls[] = {1,3,5,7,9};
    cout<<aggressivecows(stalls,5,2);

    
}