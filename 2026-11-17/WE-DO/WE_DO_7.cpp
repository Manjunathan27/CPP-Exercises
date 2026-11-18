#include<iostream>
using namespace std;
int twice(int amount);
int twice(int amount)
{
    return amount*2;
}
double twice (double amount);
double twice (double amount)
{
    return amount*2.0;
}
int main()
{
    int integer_amount;
    double double_amount;
    cin>>integer_amount>>double_amount;
    cout<<twice(integer_amount)<<endl;
    cout<<twice(double_amount);
    
}