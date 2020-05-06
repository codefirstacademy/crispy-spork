#include<iostream>

using namespace std;

void sum(int a, int b)
{
    int c=a+b;
    cout<<c<<endl;
}

void sum(int a, float b)
{
    float c=a+b;
    cout<<c<<endl;
}

void sum(float a, float b)
{
    float c=a+b;
    cout<<c<<endl;
}

int main()
{
    int x=5, y=6;
    float p=4.5, q=5.6;
    sum(x,y);
    sum(x,p);
    sum(p,q);
    return 0;
}
