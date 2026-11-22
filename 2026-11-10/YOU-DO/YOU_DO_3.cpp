#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0 && number<1000000)
    {
    for (int index=1;index<number;index++)
    {
        if (number%index==0)
        {
            sum=sum+index;
        }
        
    }
    }
if (number==sum)
{
    cout<<"The Enterd number is perfect number";
}
else
{
    cout<<"The Enterd number is not a perfect number";
}

    
}