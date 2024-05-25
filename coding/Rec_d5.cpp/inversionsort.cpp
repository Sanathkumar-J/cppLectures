#include<iostream>
using namespace std;


int  merge(int *arr,int s,int e){
    int mid = (s+e)/2;
    int length1 = mid - s + 1;
    int length2 = e - mid;

    int count = 0;

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
            count += mid-index1+1;//for inversion count left one should be greater than right one so here we increased thr count value
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
    return count;
    
}



int mergesort(int* arr,int s,int e){
    //basecase
    int count = 0;
    if(s>=e){
        return count;
    }
    int mid = (s+e)/2;
    //leftpart
    count += mergesort(arr,s,mid); //increment to count
    //rightpart
    count += mergesort(arr,mid+1,e);//increment to count
    count += merge(arr,s,e);//increment to count
    return count;
    

}
int main(){
    int arr[5] = {5,4,3,1,2};
    int ans = mergesort(arr,0,4);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<ans;
    
}