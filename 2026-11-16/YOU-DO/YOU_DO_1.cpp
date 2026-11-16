#include<iostream>
using namespace std;
bool primeCheck(int number)
{
    bool value = false;
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            value = true;
        }
    }
    return value;

}
int main()
{
    int number;
    cin>>number;
    bool value = primeCheck(number);
    
    if(value==true ||  number<=1)
    {
        cout<<"Not a prime";
    }
    else
    {
        cout<<"Not a prime";
    }

}