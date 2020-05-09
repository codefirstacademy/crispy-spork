#include<iostream>
using namespace std;

 class A
 {
   public:
 A() {
    cout<<"Show from A"<<endl;
 }
 ~A() {
    cout<<"Show from A"<<endl;
 }
   };
   class B:public A
   {
       public:
     B() {
    cout<<"Show from B"<<endl;
     }
     ~B() {
    cout<<"Show from B"<<endl;
 }
   };
     class C:public B
   {
       public:
     C(){
     cout<<"Show from C"<<endl;
     }
     ~C() {
    cout<<"Show from C"<<endl;
 }
   };

class D:public C
{
    public:
    D() {
    cout<<"Show from D"<<endl;
 }
 ~D() {
    cout<<"Show from D"<<endl;
 }
};

int main(void) {
    D obj;
    return 0;
}
