#include<iostream>

using namespace std;

class distances{
    int feet,inch;
public:
    distances()
    {
        feet=0;
        inch=0;
    }
    distances(int f, int i)
    {
        feet=f;
        inch=i;
    }
    bool operator < (distances d)
    {
        if(this->feet<d.feet)
            return true;
        else if(this->feet==d.feet && this->inch<d.inch)
            return true;
        else
            return false;
    }
};

int main()
{
    distances d1(2,3), d2(2,1);
    if (d1<d2)
        cout<<"Distance 1 is less than distance 2"<<endl;
    else
        cout<<"Distance 2 is less than distance 1"<<endl;
    return 0;
}
