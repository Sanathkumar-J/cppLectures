#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2;
    int length1 = mid - s + 1;
    int length2 = e - mid;

    //creating arrays
    int* first = new int[length1];
    int* second = new int[length2];

    //copying values
    int mainarrayindex = s;
    for(int i = 0;i<length1;i++){
        first[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    mainarrayindex = mid+1;
    for(int i = 0;i<length2;i++){
        second[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    //merging 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;

    while(index1<length1 && index2<length2){
        if(first[index1] < second[index2]){
            arr[mainarrayindex] = first[index1];
            index1++;
            mainarrayindex++;

        }
        else{
            arr[mainarrayindex] = second[index2];
            index2++;
            mainarrayindex++;
        }
    }

    while(index1<length1){
        arr[mainarrayindex] = first[index1];
            index1++;
            mainarrayindex++;
        
    }
    while(index2<length2){
         arr[mainarrayindex] = second[index2];
            index2++;
            mainarrayindex++;
    }
}

void mergesort(int* arr,int s,int e){
    //basecase
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    //leftpart
    mergesort(arr,s,mid); 
    //rightpart
    mergesort(arr,mid+1,e);
    merge(arr,s,e);

}
int main(){
    int arr[5] = {5,4,3,1,2};
    mergesort(arr,0,4);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}