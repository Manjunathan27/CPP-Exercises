#include<iostream>
using namespace std;
int main()
{
    int num1,num2,lcm;
    cout<<"Enter the numbers : ";
    cin>>num1;
    cin>>num2;
    if(num1>num2)
    {
        lcm=num1;
    }
    else
    {
        lcm=num2;
    }
    while (true)
    {
        if (lcm%num1==0 && lcm%num2==0)
    {
        break;
    }
    lcm++;
    }
    cout<<"The LCM is : "<<lcm;
    
   
    
}