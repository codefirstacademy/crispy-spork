#include<iostream>

using namespace std;

 class A {
   public:
 void eat() {
    cout<<"Eating..."<<endl;
 }
   };
   class B: protected A
   {
       public:
     void drink(){
         eat();
    cout<<"Drinking...";
     }
   };
int main(void) {
    B obj1;
   // obj1.eat();
    obj1.drink();
    return 0;
}
