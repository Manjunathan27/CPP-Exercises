#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    do
    {
     cout<<number<<endl;   
     number=number+2;
    } while (number<=8);
    
}