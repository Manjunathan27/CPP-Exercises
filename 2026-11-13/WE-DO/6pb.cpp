#include<iostream>
using namespace std;
int main()
{
    int attendance[5],replacement,day;
    cout<<"Enter the Attendance Count : ";
    for(int index=0;index<5;index++)
    {
        cin>>attendance[index];
    }
    cout<<"Which day we have to update : ";
    cin>>day;
    cout<<"replacement Value";
    cin>>replacement;
    
    attendance[day]=replacement;
    for(int index=0;index<5;index++)
    {
        cout<<attendance[index]<<" ";
    }
    }