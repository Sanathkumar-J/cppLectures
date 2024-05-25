#include<iostream>
using namespace std;

char everse(string a){
    int count = 0;
    int i = 0;
    //for(int i =0;i<a.length();i++){
    while((a[i] != ' ' ) ||(a[i] !=  '/0')){        
        count++;
        i++;
    }
    int m = count;
    int s = 0;
    while(s<=count){
        swap(a[s],a[count]);
        count--;
        s++;
        

    }
    s = m -1;


        

    

    

}

int main(){
    
}