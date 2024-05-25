 #include<iostream>
 using namespace std;

 void tripsum(int arr[],int n,int m){

    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k =j+1; k<n; k++){
                if (arr[i]+arr[j]+arr[k]== m){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            }
            }
            cout<<endl;
        }
    }

 }

int main(){
    int n;
    cin>>n;
    int arr1[5] = {1,2,3,4,5};
    tripsum(arr1,5,n);

 }