#include<iostream>
using namespace std;
int main()
{
    int n,count=0,number=2;
    cout<<"Enter the number : ";
    cin>>n;
    while (count<n)
    {
        int index;
        for ( index=2;index<=number;index++)
        {
            if (number%index==0)
            {
                break;
            }
        }    
            
            if (index==number)
            {
                count=count+1;
            }
            if (count<n)
            {
                number=number+1;
            }
            
            
        
        
    }
    cout<<number;
    
}