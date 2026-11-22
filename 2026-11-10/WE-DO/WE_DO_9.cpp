#include<iostream>
using namespace std;
int main()
{
    int  number,count=0;
    cin>>number;
    while (number>0)
    {
        number/=10;
        count=count+1;
    }
    cout<<count;
    
}