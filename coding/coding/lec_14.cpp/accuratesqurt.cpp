//integer sqrt of a number by BS

#include<iostream>
using namespace std;

 int Binarysearch(int n){//to over come contsrain of max int we use long long int

    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<=e){
        int square = mid*mid;
        if (square == n){
           return mid;
        }
          if(square<n){
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


int moreprecision(int n, int precision, int tempsol ){

    double factor = 1;
    double ans = tempsol;
    for(int i = 0;i<precision;i++){
        factor = factor/10;
        //0.1
        //0.01
        //0.001....
        for (double   j = ans; j*j<n; j = j+factor){
            ans = j;

        }
        

    }
    return ans; 

}
int main(){
    int n;
    cin>>n;
    int tempsol = squrt(n);
    int precisionans = moreprecision(n,3,tempsol);

    cout<<"square root of "<<n<<"is"<<precisionans;
    return 0;
    
    
    

}

