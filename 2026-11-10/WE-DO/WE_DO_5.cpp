#include<iostream>
using namespace std;
int main()
{
    float number,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0 && number<1000000)
    {
    for(int index=1;index<=number;index++)
    {
        sum=sum+index;
    }
    cout<<"Average of numbers from 1 to "<<number<<" is "<<(sum/number);
}
else{
    cout<<"Invalid Input";
}
}