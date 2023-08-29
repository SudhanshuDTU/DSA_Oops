#include<iostream>
using namespace std;
class Hero{
public:

 int play;
 static int health;

 static int random(){
    return health;
 }
};

int Hero::health = 10;

int main(){
  Hero::health = 30;
  cout<<Hero::random(); //30 
   
}