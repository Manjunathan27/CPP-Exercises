#include<iostream>
using namespace std;
int main()
{
    int base,exponent,value=1;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>exponent;
    if (exponent==0)
    {
        value=1;
    }
   if(((base>=1) && (base<=100)) && ((exponent>=1) && (exponent<=10)))
    {
        for (int index=1;index<=exponent;index++)
        {
            value=value*base;
        }
        
    }
    cout<<"The value is : "<<value;

}