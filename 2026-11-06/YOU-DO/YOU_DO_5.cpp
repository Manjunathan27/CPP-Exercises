#include<iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    cout<<"Enter the 2 numbers : ";
    cin>>number1>>number2;
    if(number1>number2)
    {
        cout<<number2<<" is the smallest";
    }
    else if (number1==number2)
    {
        cout<<"both are equal";
    }
    else
    {
        cout<<number1<<" is the smallest";
    }
}