#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0 && number<1000000)
    {
    for(int index=1; index<=number; index++)
    {
        if(index%2==0)
        {
            sum=sum+index;
        }
    }
    cout<<"The sum of the numbers is : "<<sum;
}
else
{
    cout<<"Invalid Input";
}
}