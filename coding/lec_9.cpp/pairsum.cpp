 #include<iostream>
 using namespace std;

 void pairsum(int arr[],int n,int m){

    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if (arr[i]+arr[j] == m){
                cout<<arr[i]<<" "<<arr[j];
            }
            cout<<endl;
        }
    }

 }

 int main(){
    int n;
    cin>>n;
    int arr1[5] = {1,2,3,4,5};
    pairsum(arr1,5,n);

 }