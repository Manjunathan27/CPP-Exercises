#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if ((number>99) && (number<1000) )
    {
        cout<<"Yes it is a three-digit number";
}
    else
    {
         cout<<"No, not a three-digit number";
    }
    
}