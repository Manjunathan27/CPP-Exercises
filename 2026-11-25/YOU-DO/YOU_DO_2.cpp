#include<iostream>
using namespace std;
class Equipment
{
    public:
    int code;
};
class  Generator : public Equipment
{
    public:
    int rating;
    void setcode(int gcode, int rating1)
    {
        code=gcode;
        rating=rating1;
    }
    void getvalue()
    {
        cout<<"Generator "<<code<<": "<<rating<<" kW"<<endl;
    }
};
class Pump : public Equipment
{
    public:
    int rating;
     void setcode(int gcode, int rating1)
    {
        code=gcode;
        rating=rating1;
    }
    void getvalue()
    {
        cout<<"Pump "<<code<<": "<<rating<<" L/min"<<endl;
    }
};
int main()
{
    int gcode,grating,pcode,prating;
    cout<<"Enter the generator code: ";
    cin>>gcode;
    cout<<"Enter the generator rating: ";
    cin>>grating;
    cout<<"Enter the pump code: ";
    cin>>pcode;
    cout<<"Enter the pump rating:  ";
    cin>>prating;

    Generator g1;
    Pump p1;
    g1.setcode(gcode,grating);
    p1.setcode(pcode,prating);
    g1.getvalue();
    p1.getvalue();
}