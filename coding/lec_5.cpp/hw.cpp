//binary to decimal

#include<iostream>
#include<math.h>

using namespace std;


int main(){
    int bin;
    cin>>bin;
    int  power = 0;
    int dec = 0;
    if(bin%10==0 or bin%10 == 1 ){

      while(bin>0){
        int mul = bin%10;
        dec = dec + mul*pow(2,power);
        power = power + 1;
        bin = bin/10;


      }
      cout<<dec;
    }
    else{
      cout<<"bru enter binary ";

    }

    }

       


    