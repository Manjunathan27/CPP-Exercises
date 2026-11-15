#include<iostream>
using namespace std;
int main()
{
    int customerServed = 20;
    (customerServed++);
    cout<<customerServed<<endl;
    (customerServed+=2);
    cout<<(customerServed)<<endl;
    (customerServed--);
    cout<<(customerServed);
}   