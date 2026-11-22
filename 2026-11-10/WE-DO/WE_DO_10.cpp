#include<iostream>
using namespace std;
int main()
{
    int number,prevdigit,sum=0;
    cout<<"Enter the number ";
    cin>>number;
    number = abs(number);
    while (number>0)
    {
        prevdigit=number%10;
        sum=sum+prevdigit;
        number=number/10;

    }
    cout<<"The sum od the Entered number is : "<<sum;
    
}