#include <iostream>

using namespace std;

class student{
int roll;
float marks;
    public:
      void input();
      void output();
};

    void student::input(){
        cout<<"Enter the information of the student"<<endl;
        cin>>roll>>marks;
    }
    void student::output(){
        cout<<"The details of the student are"<<endl;
        cout<<roll<<endl<<marks;
    }

    int main()
    {
        student s1;
        s1.input();
        s1.output();
        return 0;
    }
