#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0)
    {
    for(int index=1;index<=number;index++)
    {
        sum=sum+index;
    }
    cout<<"sum of numbers from 1 to "<<number<<" is "<<sum;
}
else{
    cout<<"Invalid Input";
}
}