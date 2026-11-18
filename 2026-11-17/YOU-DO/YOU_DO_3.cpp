#include<iostream>
using namespace std;
int payableAmount(int bill)
{
    if(bill>=500)
    {
        bill-=50;
    }
    return bill;

}
int main()
{
    int bill;
    cin>>bill;
    cout<<payableAmount(bill);
}