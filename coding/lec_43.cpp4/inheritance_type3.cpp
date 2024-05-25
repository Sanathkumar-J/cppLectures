//Multiple Inheritance

#include<iostream>
using namespace std;

class Animal{
    public:
    int name;
    int height;
    int age;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking" <<endl;
    }


};

class Man : public Animal,public Human{

};
int main(){// Accesing child class my inheritance classes
    Man m1;
    m1.bark();
    m1.speak();
}