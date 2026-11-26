#include<iostream>
using namespace std;
class Vehicle
{
    public:
    int id;
};
class Bus : public Vehicle
{
    public:
    int count;
    void setcount(int id1, int count1)
    {
        id=id1;
        count=count1;
    }
    void getcount()
    {
        cout<<"Bus "<<id<<": "<<count<<endl;
    }
};
class Van : public Vehicle
{
    public:
    int payload;
    void setLoad(int id1, int payload1)
    {
        id=id1;
        payload=payload1;
    }
     void getload()
    {
        cout<<"Van "<<id<<": "<<payload<<endl;
    }
};
int main()
{
    int busid,seatcount,vanid,payload;
    cout<<"Enter the bus ID: ";
    cin>>busid;
    cout<<"Enter the seat count: ";
    cin>>seatcount;
    cout<<"Enter the van ID: ";
    cin>>vanid;
    cout<<"Enter payload in kg: ";
    cin>>payload;
    Bus bus;
    bus.setcount(busid,seatcount);
    Van van;
    van.setLoad(vanid,payload);
    bus.getcount();
    van.getload();
}