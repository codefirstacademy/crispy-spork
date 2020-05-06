/*
Define a class batsman with the following specifications:

Private members:

bcode int number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula – batavg =runs/(innings-notout)
calcavg() Function to compute batavg

Public members:

readdata(): Function to accept value from bcode, name, innings, notout and invoke the function calcavg()
displaydata(): Function to display the data members on the screen.

*/

#include <iostream>

using namespace std;

class batsman
{
    int bcode;
    char bname[20];
    int innings, notouts, runs;
    float batavg;
    void calcavg()
    {
        batavg=(float) runs/(innings-notouts);
    }
public:
    void readdata()
    {
        cout<<"Enter the details of the batsman in following order: code, name, innings, notout, runs:"<<endl;
        cin>>bcode;
        fflush(stdin);
        cin.get(bname,20);
        cin>>innings>>notouts>>runs;
        calcavg();
    }
    void displaydata()
    {
        cout<<"The details of the batsman are as follow:"<<endl;
        cout<<"Batsman Code: "<<bcode<<endl;
        cout<<bname;
        cout<<"The total innings, notouts and runs are as: "<<innings<<"\t"<<notouts<<"\t"<<runs<<endl;
        cout<<"The average of the batsman is : "<<batavg<<endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}
