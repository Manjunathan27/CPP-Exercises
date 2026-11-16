#include<iostream>
using namespace std;
int addingnumbers(int number1, int number2)
{
    int sum = number1+number2;
    return sum;
}
int main()
{
    int number1, number2;
    cin>>number1;
    cin>>number2;
    int sum = addingnumbers(number1, number2);
    cout<<"The addition of two numbers is : "<<sum;
}