#include<iostream>
using namespace std;
int main()
{
    int target, deposit, weeks=0, savings=0;
    cin>>target;
    cin>>deposit;
    do
    {
         savings = deposit+savings;
        deposit=deposit+20;
        weeks++;
    }
    while (savings<=target);
    cout<<"Weeks : "<<weeks<<endl;
    cout<<"Savings : "<<savings;
    
}