#include<iostream>
using namespace std;

class A{
 public:
    
    // void sayHello(){
    //     cout<<"hello bhai";
    // }
    // void sayHello(string name){
    //     cout<<"hello bhai";
    // }

    // int sayHello(){  
    //     cout<<"hello bhai"; 
    //     return 1;
    // }

    int sayHello(int num){   //chlega
        cout<<"hello bhai"; 
        return 1;
    }
};

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.b;
        cout<<"output"<< value2 - value1;
    }

};

class Animal{
    public:

    void speak(){
        cout<<"speaking";
    }
};

class Dog : public Animal{
      public:
       void speak(){
          cout<<"Bark";
        }
};


int main(){
    Dog d;
    d.speak();  //Bark run time polymorphism
    d.Animal::speak(); //speaking



}