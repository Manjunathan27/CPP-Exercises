#include<iostream>
using namespace std;
int main()
{
    int Data[6];
    cout<<"Enter the Data : ";
    for(int index=0;index<6;index++)
    {
        cin>>Data[index];
    }
    int target,count=0;
    cout<<"Enter the search number : ";
    cin>>target;
    for(int i=0;i<6;i++)
    {
        if(Data[i]==target)
        {
            cout<<"Index : "<<i<<endl;
            count++;
        }
    }
    if(count>0)
    {
        cout<<"Match Count : "<<count;
    }
    else
    {
        cout<<"Not Found";
    }
}