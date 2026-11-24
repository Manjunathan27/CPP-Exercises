#include<iostream>
using namespace std;
class eventBooking
{
    private:
    int seatcount=30;

    public:
    // void seteeventBooking()
    // {
    //     seatcount=30;
    // }
    void geteventBooking(int request)
    {
        if (seatcount>request)
        {
            seatcount=seatcount-request;
            cout<<"Accepted ";
        }
        else
        {
            cout<<"Rejected ";
        }
        cout<<seatcount<<endl;
    }

};
int main()
{
    eventBooking eve1;
    int number, seatrequest;
    cout<<"Enter the number of requests: ";
    cin>>number;
    for (int index=1;index<=number;index++)
    {
        cout<<"Enter the number of seats for request "<<index<<" ";
        cin>>seatrequest;
        eve1.geteventBooking(seatrequest);
    }
    
}