#include<iostream>
using namespace std;

class Hero{

    //properties
    private://can be accessed only inside the class
    int health;
    
    public://can be accessed anywhere
    char level;

    //simple constructor
    Hero(){
        cout<<"constructor called";
    }

    //parameterised constructor
    Hero(int health){
        //this - pointer addressing the created objected
        this -> health = health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    //to access propeties of private we use getter and setter
    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void print(){
        cout<<level<<endl;
        cout<<gethealth()<<endl;
    }
    
    

};

int main(){
    //object creation statistically
    Hero ram(10);
    ram.print();
    

    //dynamically

    Hero *h = new Hero(11);
    h->print();

    Hero temp(22,'B');
    temp.print();
    


}

