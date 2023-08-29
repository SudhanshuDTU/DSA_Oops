#include<iostream>
using namespace std;

class Hero{
private:
    int health;  //can access only inside class Hero

public:
    int getHealth(){  //Getter 
    return health;
    }

    void setHealth(int h){  //Setter
    health = h;
    }

};
int main(){ 
    //Static Allocation
    
    Hero h1; //object
    h1.setHealth(10); //set health value
    cout<<"health of h1 is :"<< h1.getHealth()<<endl;  //10
    
    //Dynamic Allocation

    Hero *ptr = new Hero; //object
    (*ptr).setHealth(30); //set health value
    cout<<"health of h1 is :"<< (*ptr).getHealth();  //30
    

}