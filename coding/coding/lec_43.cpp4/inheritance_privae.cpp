#include<iostream>
using namespace std;

class Human{
    private:
    int height;
    int weight = 60;
    string name;

    public:
    int getweight(){
        return this-> weight;
    }

};

class Male : private Human{
    public:
    int rank;
    // int getweight(){
    //     return this-> weight = 6;
    // }

    int getans(){
        return getweight();
    }

};

int main(){
    Male m1;
    cout<<m1.rank<<endl;
    cout<<m1.getans()<<endl;//accessing weight from child class
    Human h1;
    cout<<h1.getweight();//accesing weight from parent class
    
}

/*Notes :
 We can only access public one but not private and protected to access that we have to use getter and setter in public part
 In case of inheritance we can access the private and protected inside the parent class and inside the child class
 if we called parent class */

 /* And in upar code first I accessed weight in parent class in public properrty and then i accessed the function
  in child class public property then from that I got answer*/