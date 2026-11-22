#include<iostream>
using namespace std;
int main()
{
    int id[6];
    int target,count=0;
    cout<<"Enter the IDs : ";
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
        count++;
        cout<<index<<" ";
    }
}
if(count>1)
{
    cout<<"Count : "<<count;
}
else
{
    cout<<"No Matches"<<endl;
    cout<<"Count : "<<count;
}
}