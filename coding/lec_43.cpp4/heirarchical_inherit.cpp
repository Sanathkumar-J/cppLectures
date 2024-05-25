//Heirrarchical Inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<" INside function 1"<<endl;
    }

};

class B : public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;

    }
};
class C : public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};


int main(){
    C three;
    A one;
    B two;
    //getting inside func1
    three.func1();
    one.func1();
    two.func1();

    //getting inside func 2
    two.func2();


}