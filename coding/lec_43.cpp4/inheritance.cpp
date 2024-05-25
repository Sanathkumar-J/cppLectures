#include<iostream>
using namespace std;

class Human{
    
    //properties;
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this -> age;
    }

    int setWeight(int w){
        this -> weight = w;
        return w;
    }

};

class Male:public Human{
    public:   
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};


int main(){
    Male m1;
    cout<<m1.age<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.setWeight(99);
}

