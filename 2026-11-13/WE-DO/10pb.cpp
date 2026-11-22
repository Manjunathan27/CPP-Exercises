#include<iostream>
using namespace std;
int main()
{
    int array[100],pos=0;
    int number;
    cin>>number;
    for (int index=1;index<=number;index++)
    {
        if (number%index==0)
        {
            array[pos]=index;
            pos++;
        }
        
    }
    for (int index=0;index<pos;index++)
    {
        cout<<array[index]<<" ";
    }
    
        
}