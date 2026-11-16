#include<iostream>
using namespace std;
int  totalSavings(int number)
{
    int n=0;
    for(int index=1;index<=number;index++)
    {
        n=n+(index*5);

    }
    return n;
}
int main()
{
    int number;
    cin>>number;
    int total= totalSavings(number);
    cout<<total;
}