#include<iostream>
#include<array>
#include<algorithm>

using namespace std;
int main(){

    //creating array
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i = 0;i<size;i++){//gives op as elements
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index"<<a.at(2)<<endl;//op will be 3

    cout<<"empty or not"<<a.empty()<<endl;//op boolean "0"

    cout<<"first element"<<a.front()<<endl;//op is 1
    cout<<"last element"<<a.back()<<endl;//opp is 4
}