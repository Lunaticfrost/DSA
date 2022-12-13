#include <iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello sahil"<<endl;

    }
    int sayHello(string name, int n){
        cout<<"Hello s"<<endl;
        return n;

    }
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
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
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"output is  "<< value2 -value1<<endl;
    }
};
class Animal{
  public:
  void speak(){
    cout<<"speaking"<<endl;
  }
};

class Dog: public Animal{
  public:
  void speak(){
    cout<<"Barking"<<endl;
  }
};

int main(){
   




   Dog obj;
   obj.speak();
   /*B obj1, obj2;

   obj1.a = 4;
   obj2.a= 7;
   obj1 +obj2;*/



    return 0;
}