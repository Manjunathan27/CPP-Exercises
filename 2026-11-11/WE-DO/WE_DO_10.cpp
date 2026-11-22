#include<iostream>
using namespace std;
int main()
{
    int num1,num2,remainder;
    cin>>num1;
    cin>>num2;
    while (num2!=0)
    {
        remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
     cout<<"Tile side = "<<num1;
    
}