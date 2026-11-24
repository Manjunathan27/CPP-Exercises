#include<iostream>
#include<iomanip>
using namespace std;

class waterTank
{
    private:
    int capacity;
    int waterlevel;
    double displaypercentage()
    {
        return (waterlevel*100.0)/capacity;
    }

    public:
    void setwaterTank(int capacity1, int waterlevel1)
    {
        capacity=capacity1;
        waterlevel=waterlevel1;
    }
    void getpercentage()
    {
        double percentage=displaypercentage();
        cout<<fixed<<setprecision(2);
        cout<<"Fill "<<percentage<<"%"<<endl;
        if (percentage<25)
        {
            cout<<"Refill required";
        }
        
    }
};
int main()
{
    waterTank wt1;
    int capacity,currentWaterLevel;
    cout<<"Enter the tank capacity in litres: ";
    cin>>capacity;
    cout<<"Enter the current water level in litres: ";
    cin>>currentWaterLevel;
    wt1.setwaterTank(capacity,currentWaterLevel);
    wt1.getpercentage();
}