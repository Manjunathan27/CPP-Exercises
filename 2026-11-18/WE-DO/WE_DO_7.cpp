#include<iostream>
using namespace std;
int main()
{
    int array[4];
    for(int index=0; index<4; index++)
    {
        cin>>array[index];
    }
    int index;
    cin>>index;
     int *pointer=&array[index];
     cout<<*pointer;
    
}