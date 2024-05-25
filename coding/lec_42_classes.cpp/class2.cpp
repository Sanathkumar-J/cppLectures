#include<iostream>
using namespace std;

class Hero{

    //properties
    private://can be accessed only inside the class
    int health;
    
    public://can be accessed anywhere
    char level;

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
    
    

};


int main(){

    //static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('B');
    //level
    cout<<a.level<<endl;
    //health
    cout<<a.gethealth()<<endl;

    //dynamically
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(70);
    //level
    cout<<(*b).level<<endl;
    //or
    cout<< b->level<<endl;
    //health
    cout<<(*b).gethealth()<<endl;
    //or
    cout<< b->gethealth()<<endl;
    


}