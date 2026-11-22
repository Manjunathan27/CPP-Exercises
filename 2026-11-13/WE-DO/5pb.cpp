#include<iostream>
using namespace std ;
int main()
{
    int solditemscount[5];
    cout<<"Enter the Items Count in order : ";
    for(int index=0;index<5;index++)
    {
        cin>>solditemscount[index];
    }
    for(int index=0;index<5;index++)
    {
        cout<<solditemscount[index]<<" ";
    }
}