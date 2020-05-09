#include<iostream>
using namespace std;

 class A {
   public:
 void eat() {
    cout<<"Eating..."<<endl;
 }
   };
   class B: public A
   {
       public:
     void drink(){
    cout<<"Drinking...";
     }
   };
     class C: public B
   {
       public:
     void sleep(){
    cout<<"Sleeping...";
     }
   };

int main(void) {
    C obj1;
    obj1.eat();
    obj1.drink();
    obj1.sleep();
    return 0;
}
