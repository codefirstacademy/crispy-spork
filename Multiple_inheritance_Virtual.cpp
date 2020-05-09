#include<iostream>
using namespace std;

class D
{
    public:
 void showD() {
    cout<<"Show from D"<<endl;
 }
};

 class A:virtual public D
 {
   public:
 void showA() {
    cout<<"Show from A"<<endl;
 }
   };
   class B:virtual public D
   {
       public:
     void showB() {
    cout<<"Show from B"<<endl;
     }
   };
     class C: public A, public B
   {
       public:
     void showC(){
     cout<<"Show from C"<<endl;
     }
   };

int main(void) {
    C obj;
    obj.showD();
    return 0;
}
