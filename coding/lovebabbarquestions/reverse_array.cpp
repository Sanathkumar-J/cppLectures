#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void reverse(vector<int> v,int n){
    sort(v.begin(), v.end()); 
    int s = 0;
    int end = v.size()-1;
    
    while(s>=end){
        swap(v[s],v[end]);
        s++;
        end--;
    }
}
