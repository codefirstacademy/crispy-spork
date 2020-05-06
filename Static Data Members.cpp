#include <iostream>
using namespace std;
class student{
int roll;
float marks;
static int count; //Static Data Member
public:
    void input(){
        cout<<"Enter the information of the student"<<endl;
        cin>>roll>>marks;
        count++;
    }
    void output(){
        cout<<"The details of the student are"<<endl;
        cout<<roll<<endl<<marks;
    }
    static void countresult(){
    cout<<endl<<"Total object count is: "<<count;
    }//Static Member Function
};
int student::count=0; //Static variable initialization with classname

int main()
{
    student s1,s2;
    s1.input();
    s2.input();
    student::countresult();
    return 0;
}
