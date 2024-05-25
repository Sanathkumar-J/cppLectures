//integer sqrt of a number by BS

#include<iostream>
using namespace std;

 int Binarysearch(int n){//to over come contsrain of max int we use long long int

    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<e){
        int square = mid*mid;
        if (square == n){
            return mid;
        }
        else if(square<n){
            ans = mid;
            s= mid +1;

        }
        else{
            e = mid - 1;

        }
        int mid = s + (e-s)/2;

        
    }
    return ans;

}

int squrt(int x){
    return Binarysearch(x);
}

int main(){
    int n;
    cin>>n;
    int answer = squrt(n);
    int answers = Binarysearch(n);
    cout<<answers;
    

}