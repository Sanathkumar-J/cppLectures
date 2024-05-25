//by using xor i can find the unique element in xor a^a = 0; in xor 0^num = num

#include<iostream>
using namespace std;

void findunq(int arr[],int n){
    int ans =  0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    cout<<ans;
}

int main(){

    int arr1[5] = {2,3,3,2,15};
    findunq(arr1,5);

}
