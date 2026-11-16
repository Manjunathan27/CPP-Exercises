#include<iostream>
using namespace std;
int sumdigits(int number)
{
    int prevdigit;
    int digitsum=0;
    while(number>0)
    {
        prevdigit=number%10;
        digitsum=digitsum+prevdigit;
        number=number/10;
    }
    return digitsum;
}
int main()
{
    int number;
    cin>>number;
    int total = sumdigits(number);
    cout<<total;
}