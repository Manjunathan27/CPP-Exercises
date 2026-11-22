#include<iostream>
using namespace std;
int factorialfunction(int number)
{
    if (number==0)
    {
        return 1;
    }
    
    int value = number*factorialfunction(number-1);
    return value;

}
int main()
{
    int number;
    cout<<"Enter the number to get the factorial: ";
    cin>>number;
    if (number>0 && number<21)
    {
    int value= factorialfunction(number);
    cout<<"Factorial of "<<number <<" is "<<value;
    }
    else
    {
        cout<<"Invalid Input";
    }
}