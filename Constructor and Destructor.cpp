#include <iostream>

using namespace std;

class car
{
    int car_id;
    float price;
public:
   /* car()//default consturctor without initialization
    {
        cout<<"Default Consturctor called"<<endl;
    }*/
    car()//default constructor with initialization
    {
        car_id=1;
        price=250000;
    }
    car(int c,float p)//parameterized constructor
    {
        car_id=c;
        price=p;
    }
    car(car &c)//copy constructor
    {
        car_id=c.car_id;
        price=c.price;
    }
    ~car()//Destructor
    {
        cout<<endl<<"Destructor called"<<endl;
    }
    void input()
    {
        cin>>car_id>>price;
    }
    void output()
    {
        cout<<endl<<"Details of the car are"<<endl;
        cout<<car_id<<endl<<price;
    }
};

int main()
{
    car c1,c2(111,300000),c3(c2);
    c1.output();
    c2.output();
    c3.output();
    return 0;
}
