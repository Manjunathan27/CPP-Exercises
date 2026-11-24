#include<iostream>
using namespace std;
class bus1
{
    private:
    int seatcount;
    int booked;

    public:
    void setseatcount(int seatcount1,int booked1)
    {
        seatcount=seatcount1;
        booked=booked1;
    }
    void getseatcount()
    {
        cout<<seatcount-booked;
    }
};
class bus2
{
    private:
    int seatcount;

    public:
    void setseatcount(int seatcount1)
    {
        seatcount=seatcount1;
    }
    void getseatcount()
    {
        cout<<seatcount;
    }
};
int main()
{
    bus1 bus11;
    bus2 bus22;
    int bus1,bus2,reserve;
    cout<<"Enter the available seats for Bus 1: ";
    cin>>bus1;
    cout<<"Enter the available seats for Bus 2: ";
    cin>>bus2;
    cout<<"Enter the number of seats to book on Bus 1: ";
    cin>>reserve;
    bus11.setseatcount(bus1,reserve);
    bus22.setseatcount(bus2);
    cout<<"Bus 1 available ";
    bus11.getseatcount();
    cout<<endl<<"Bus 2 available ";
    bus22.getseatcount();
}