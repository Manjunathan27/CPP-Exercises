#include<iostream>
using namespace std;
int main()
{
    int code=7351,temp,tot=0,rem;
    rem=code;
    while(rem>0)
    {
        temp = rem%10;
        tot = tot+temp;
        rem=rem/10;
    }
    cout<<"The Total is : "<<tot;
}