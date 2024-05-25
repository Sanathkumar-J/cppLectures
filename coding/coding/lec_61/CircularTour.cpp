/*https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1
Very important question
Solution:

what question is?: The circle contains n petrol pumps we have to find the start of the point petrol from where it goes and
it comes backto the same point without stopping i.e with sufficient petrol
for more approach  refer book

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int balance = 0;
       int deficit = 0;
       int start = 0;
       
       for(int i=0; i<n; i++){
           balance += p[i].petrol - p[i].distance;
           if(balance < 0){
               deficit += balance;
               start = i+1;
               balance = 0;
           }
       }
       
       if(deficit + balance >= 0){
           return start;
       }
       else{
           return -1;
       }
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends */



