#include<iostream>
using namespace std;
int main()
{
    int number,count=0,sheets=0;
    cout<<"Enter the Number : ";
    cin>>number;
    for(int index=1;index<=number;index++)
    {
        count=count+4;
        sheets=count+sheets;
       // cout<<count<<endl;
    }

    cout<<sheets<<endl;
}