#include<iostream>
using namespace std;

 class A {
   public:
 void show() {
    cout<<"Show from A"<<endl;
 }
   };
   class B
   {
       public:
     void show() {
    cout<<"Show from B"<<endl;
     }
   };
     class C: public A, public B
   {
       public:
     void view(){
        A::show();
        B::show();
     }
   };

int main(void) {
    C obj;
    obj.view();
    return 0;
}
