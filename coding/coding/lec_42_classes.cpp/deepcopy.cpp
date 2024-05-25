#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    //properties
    private://can be accessed only inside the class
    int health;
    
    public://can be accessed anywhere
    char level;
    char *name;

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

    

    //copy constructor 

    Hero(Hero &temp){// using direct address& to avoid infinite loop
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch , temp.name);

        this->name = ch;
        this->level = temp.level;

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
    void setName(char ch[]){
        name = ch;
    }

    void print(){
        cout<<level<<endl;
        cout<<gethealth()<<endl;
        cout<<name<<endl;
    }
    
    

};
int main(){
    Hero h1;

    h1.sethealth(12);
    h1.setlevel('D');
    char name[7] = "Sweety";
    h1.setName(name);

    h1.print();

    //use default copy constructor

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'g';
    h1.print();
    h2.print();


    

}