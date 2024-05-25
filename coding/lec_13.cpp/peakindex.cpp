#include<iostream>
using namespace std;

int peakindex(int arr[],int n){

    int s = 0;//start
    int e= n-1;//end

    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] < arr[mid-1]){
            s = mid-1;
        }
        else{
            e = mid;//thing to observe here we can subtract by 1 but in else we are 
                    //getting 2 cases they are one arr[mid] > arr[mid-1] and another is peakvalue
                    //if we minus the peak value we will get wrong answer for time compacticity we used 2 cases inone else condition
        }
        mid = s + (e-s)/2;
    }
    return s;

}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int answer = peakindex(arr1 , 5);
    cout<<answer;
}