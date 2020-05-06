#include<iostream>
using namespace std;

class complex{
int R,I;
public:
    complex(int r=0,int i=0)
    {
            R=r;
            I=i;
    }
    complex operator + (complex &obj1)
    {
        complex c3;
        c3.R=R+obj1.R;
        c3.I=I+obj1.I;
        return c3;
    }
    void display()
    {
        cout<<R <<" + i"<<I<<endl;
    }
};

int main()
{
    complex O1(2,3),O2(4,5);
    complex O3=O1+O2;
    O3.display();
    return 0;
}
