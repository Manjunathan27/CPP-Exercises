#include<iostream>
using namespace std;
int main()
{
    int lockercode=4827,rem,temp=0;
    while(lockercode>0)
    {
        
        rem=lockercode%10;
        temp=temp+rem;
        lockercode=lockercode/10;
    }
    cout<<"The total is : "<<temp;

}