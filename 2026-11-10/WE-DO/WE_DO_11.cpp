#include<iostream>
using namespace std;
int main()
{
    int number,prevdigit,sum=0;
    cout<<"Enter the number to be reversed : ";
    cin>>number;
    while (number>0)
    {
        prevdigit=number%10;
        // sum=(prevdigit*10)+sum;
        sum = (sum*10)+prevdigit;
        number=number/10;
    }
    cout<<sum;
    
}