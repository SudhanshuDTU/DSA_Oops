#include<iostream>
using namespace std;

class Hero{
public:
    int health;

//Parameterised Constructer
Hero(int health){
  this->health = health;
  cout<<"Address of health is : "<<this<<endl;  
}

};

int main(){ 
    Hero Ramesh(10); //isse Ramesh.Hero() call hoga.Mtlb ki Class Hero me jo Hero(){} hai wo call hoga

    cout<<Ramesh.health;  //10
}