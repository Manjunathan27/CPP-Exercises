#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number: ";
    cin>>number;
    if(number>=0 && number<=1000000)
    {
        for (int index=1; index<=number; index++)
        {
            cout<<index<<endl;
        }
        
    }
}