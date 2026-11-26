#include<iostream>
#include<iomanip>
using namespace std;
class printerTray
{
    private:
    int capacity;
    int currentSheet;

    double percentage()
    {
        return (currentSheet*100.0)/capacity;
    }
    public:
    void setter(int currentsheet1)
    {
        capacity=200;
        currentSheet=currentsheet1;
    }
    void getter()
    {
        double percent= percentage();
        cout<<"Paper remaining : "<<fixed<<setprecision(2)<<percent<<"%"<<endl;
        if (percent<20)
        {
            cout<<"Paper low"<<endl;
        }
        

    }

};
int main()
{
    printerTray pt;
    int numberOfChecks;
    int sheetCount;
    cout<<"Enter the number of checks : ";
    cin>>numberOfChecks;
    for (int index=1;index<=numberOfChecks;index++)
    {
        cout<<"Enter the sheet count for check "<<index<<" :";
        cin>>sheetCount;
        pt.setter(sheetCount);
        pt.getter();

    }
    
}