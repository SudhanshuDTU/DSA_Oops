#include<iostream>
using namespace std;

class Hero{
public:
    int health;

~Hero(){
    cout<<"Destructor called"<<endl;
}

};

int main(){ 
   //static
   Hero a;

   //dynamic
 
   Hero *b = new Hero;
   delete b;  // to call destructor

    
}