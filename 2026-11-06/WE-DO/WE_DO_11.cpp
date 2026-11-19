#include<iostream>
using namespace std;
int main()
{
    int number1, number2;
    cin>>number1>>number2;
    if(number1>number2)
    {
        cout<<number1<<" is the greatest ";
    }
    else if (number1 == number2)
    {
        cout<<"Both are equal ";
    }
    else
    {
         cout<<number2<<" is the greatest ";
    }
}