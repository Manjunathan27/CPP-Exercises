#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    if(number%10==0)
    {
        cout<<"Divisible by 10";
    }
    else{
        cout<<"Not divisible by 10";
    }
}