#include<iostream>
using namespace std;
int main()
{
    int readings[5];
    cout<<"Enter the inputs : ";
    for(int i=0;i<5;i++)
    {
        cin>>readings[i];
    }
    for(int j=0;j<5;j++)
    {
        cout<<endl;
        cout<<readings[j]<<endl;
    }
}