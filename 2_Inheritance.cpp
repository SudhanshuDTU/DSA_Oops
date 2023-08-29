#include<iostream>
using namespace std;

class Human{   //Parent Class
 public:
   int age;
   int height;

private:
   int weight;
 
 public:
 int getAge(){
    return this->age;
 }
 void setWeight(int value){
    this->weight = value;
 }
};

class Male:public Human{
   public:
   string color;

   void sleep(){
    cout<<"male sleeping"<<endl;
   }
};

int main(){
   Male m1;

//   cout<< m1.weight;   cannot access private hai weight parent class me
   
   cout<<m1.getAge()<<endl;
}