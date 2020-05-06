#include<iostream>
using namespace std;

class t{
int count;
public:
    t()
    {
    count=5;
    }
    void operator ++()
    {
        count=count+1;
    }
    void display(){
    cout<<"Count = "<<count<<endl;}
};


int main()
{
    t obj1;
    ++obj1;
    obj1.display();
    return 0;
}
