#include<iostream>
using namespace std;
class attendanceCounter
{
    private:
    int count;

    public:
    attendanceCounter()
{
    count=0;
    cout<<"Before "<<count<<endl;
}
    void setattendanceCounter(int count1)
    {
        count=count1;
    }
    void getattendanceCounter()
    {
        cout<<"After ";
        cout<<count;
    }
};

int main()
{
    attendanceCounter atc;
    int count;
    cout<<"Enter the number of arrivals: ";
    cin>>count;
    atc.setattendanceCounter(count);
    atc.getattendanceCounter();
}