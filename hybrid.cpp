#include <iostream>
using namespace std;
 
 class A{
  public:
  int age;
  int getage(){
    return age;
  }
 };
  
 
  
 class D{
    public:
   int weight;
   int getweight(){
    return weight;
   }
 };

 class B:public A{
    public:
   char name;
   char getname(){
    return name;
   }
 };

class C: public A, public D{
  public:
  int height;
  int getheight(){
    return height;
  }
};



int main(){
 C obj;
 obj.age = 12;
 cout<<obj.getage()<<endl;
 cout<<obj.getheight()<<endl;
 cout<<obj.getweight()<<endl;
 return 0;
}