#include<iostream>
using namespace std;
int main()
{
    int id[6],target;
    bool flag=false;
    cout<<"Enter the Scans Id : ";
    for(int index=0;index<6;index++)
    {
        cin>>id[index];
    }
    cout<<"Enter the Target Number : ";
    cin>>target;
    for(int index=0;index<6;index++)
    {
        if(id[index]==target)
        {
            cout<<index;
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"-1";
    }
}