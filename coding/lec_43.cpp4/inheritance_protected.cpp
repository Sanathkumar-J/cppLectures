#include<iostream>
using namespace std;

class Human{
    
    //properties;
    public:
    int height = 100;
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

class Male: protected Human{
    private:   
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int test = 6;

    

    public:
    int getHeight(){
        return this->height;
    }

    int getTest(){
        return this -> test;
    }

    string me = "sanath";
    
};


int main(){
    Male m1;
    //we can access the child properties directly
    cout<<m1.getTest()<<endl; 
    cout<<m1.me<<endl;
    cout<<m1.getHeight()<<endl;//accessed the parent properties here by using getter in private in child class
}

/*if parent class is private and the properties in the child class are private then we can't access any properties
if any property of class is in private we can only access them by getter and setter and setting them in public part*/
