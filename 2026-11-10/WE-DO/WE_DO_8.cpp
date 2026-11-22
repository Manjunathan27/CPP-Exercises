#include<iostream>
using namespace std;
int main()
{
    int number,newnumber=0;
    int prevnumber=0;
    int nextnumber=1;
    cout<<"Enter the number : ";
    cin>>number;
    if (number==1)
    {
       cout<<prevnumber<<" ";
    }
    else if (number>1 && number<=50)
    {
        cout<<prevnumber<<" ";
        cout<<nextnumber<<" ";

        for (int index=2;index<number;index++)
        {
            newnumber= prevnumber+nextnumber;
            cout<<newnumber<<" ";
            prevnumber=nextnumber;
            nextnumber=newnumber;
        }
        
    }
    
    
}