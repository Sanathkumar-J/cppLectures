#include<iostream>
using namespace std;

class Hero{

    //properties
    private://can be accessed only inside the class
    int health;
    
    public://can be accessed anywhere
    int level;

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

    //creating object
    Hero ramesh;
    cout<<ramesh.gethealth();//accessed private properties 
    cout<<endl;
    ramesh.sethealth(70);
    cout<<ramesh.gethealth();
    
}