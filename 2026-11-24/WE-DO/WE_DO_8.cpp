#include<iostream>
using namespace std;
class rechargePlan
{
    private : 
    string name;
    int price;
    int validity;

    public:
    rechargePlan(string name1, int price1, int validity1)
    {
        name=name1;
        price=price1;
        validity=validity1;
    }
    void getter()
    {
        cout<<name<<" Rs "<<price<<" "<<validity<<" days"<<endl;
    }
};
int main()
{
    string name,name1;
    int price,price1;
    int validity,validity1;
    cout<<"Enter the name of Plan 1: ";
    cin>>name;
    cout<<"Enter the price in rupees for Plan 1: ";
    cin>>price;
    cout<<"Enter the validity in days for Plan 1: ";
    cin>>validity;
    cout<<"Enter the name of Plan 2: ";
    cin>>name1;
    cout<<"Enter the price in rupees for Plan 2: ";
    cin>>price1;
    cout<<"Enter the validity in days for Plan 2: ";
    cin>>validity1;
    rechargePlan rp1(name,price,validity);
    rp1.getter();
   // cout<<endl;
    
     rechargePlan rp2(name1,price1,validity1);
    rp2.getter();

}