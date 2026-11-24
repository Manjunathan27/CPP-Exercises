#include<iostream>
using namespace std;
class parkinglotclass
{
    private:
    int capacity;
    int occupiedCount;

    public:
    parkinglotclass()
    {
        capacity=20;
        occupiedCount=0;
        cout<<"Standard capacity "<<capacity<<", occupied "<<occupiedCount<<endl;
    }
     parkinglotclass(int capacity1)
    {
        capacity=capacity1;
        occupiedCount=0;
        cout<<"Custom capacity "<<capacity<<", occupied "<<occupiedCount;
    }

};
int main()
{
    int capacity;
    cout<<"Enter the custom parking capacity: ";
    cin>>capacity;
    parkinglotclass plc;
    parkinglotclass plc1(capacity);
}