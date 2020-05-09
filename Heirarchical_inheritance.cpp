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
    cout<<"Drinking..."<<endl;
     }
   };
     class C: public A
   {
       public:
     void sleep(){
    cout<<"Sleeping..."<<endl;
     }
   };

int main(void) {
    B objb;
    C objc;
    objb.eat();
    objb.drink();
    objc.eat();
    objc.sleep();
    return 0;
}
