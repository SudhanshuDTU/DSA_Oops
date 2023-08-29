#include<iostream>
using namespace std;
//class and object

class Hero{

public:         //access modifier
 //properties
 int health;
 char level;

private:
  int privateProperty;  //can be access only inside class Hero

  void print(){
    cout<<privateProperty; // No Error
  }

  
};

int main(){

    //creation of object
    Hero h1;
    cout<<"size of class Hero is : "<<sizeof(Hero)<<endl; 
   
   //print health
   h1.health = 10;
   cout<<h1.health; // 10
 
  //  cout<<h1.privateProperty;  //Error


}