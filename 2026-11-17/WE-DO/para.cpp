#include<iostream>
using namespace std;
void add()
{
    int number1,number2;
    cout<<"Enter the two numbers : ";
    cin>>number1;
    cin>>number2;
    cout<<"The addition of two numbers is : "<<number1+number2;
}
void add(int number1, int number2)
{
    cout<<number1+number2;
}
void add(int number1, int number2, int number3)
{
    cout<<number1+number2+number3;
}
int add(float number1, int number2)
{
    return number1+number2;
}
int add(int number1, int number2, float number3)
{
    return number1+number2+number3;
}

int main()
{
    int number1, number2;
    cout<<"Enter those numbers : ";
    cin>>number1,number2;
    add();
    add(number1,number2);


}