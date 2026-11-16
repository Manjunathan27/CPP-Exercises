#include<iostream>
using namespace std;
int main()
{
    int age = 17;
    bool license = true;
    if(age>=18 && license==true)
    {
        cout<<"Eligible";
    }
    else
    {
        cout<<"Not Eligible";
    }
}