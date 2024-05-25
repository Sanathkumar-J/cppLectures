//only sorted rotated arrays like{7,8,9,1,2} 

#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid]>arr[0]){
            s = mid+1;//this fgraph is monotoniacally increasing
        }

        else{
           e = mid;//this contains both monotonically decreasing and pivot value 
        }

        mid = s + (e-s)/2;


    }
    return s;//we can alo return e because at last e and s will be same and loop will end there
}

int main(){ 
    int arr[6] = {7,8,9,1,2,3};
    cout<<"pivot is"<<" "<<pivot(arr,6)<<endl;//gives index s output
}
