#include<iostream>
using namespace std;
int main()
{
    int upindex,upnumber;
    int Id[6]={101,105,110,114};
    cin>>upnumber;
    cin>>upindex;
    for(int index=5;index>=upindex;index--)
    {
        Id[index] = Id[index-1];
        if(index==upindex)
        {
            Id[index]=upnumber;
        }
    }
     for(int i=0;i<5;i++)
    {
        cout<<Id[i]<<" ";
    }
    cout<<endl;
     for(int jindex=upindex+1;jindex<5;jindex++)
    {
        Id[jindex] = Id[jindex+1];
    }
    for(int i=0;i<5;i++)
    {
        cout<<Id[i]<<" ";
    }
    
}