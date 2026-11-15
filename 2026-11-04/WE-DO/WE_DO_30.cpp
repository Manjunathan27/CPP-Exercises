#include<iostream>
using namespace std;
int main()
{
    int ticket=4826;
    if(ticket%2==0)
    {
        cout<<"The Number is Even"<<endl;
    }
    else
    {
        cout<<"The number is not Even"<<endl;
    }
    if(ticket%5==0)
    {
        cout<<"The number is multiple of 5"<<endl;
    }
    else
    {
        cout<<"The number is not multiple of 5"<<endl;
    }
    if(ticket%10>5)
    {
        cout<<"The Last number is greater than 5"<<endl;
    }
    else
    {
        cout<<"The Last number is not greater than 5";
    }

}