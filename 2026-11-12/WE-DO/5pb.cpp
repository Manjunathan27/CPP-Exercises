#include<iostream>
using namespace std;
int main()
{
    int numbercheck;
    bool flag=false;
    cout<<"The Number has to check : ";
    cin>>numbercheck;
    int arrayoflocker[5]={14,27,31,27,42};
    for(int index=0;index<5;index++)
    {
        if(numbercheck==arrayoflocker[index])
        {
            cout<<"Found at "<<index;
            flag=true;
            break;
            
        }
    }
    if(flag==false)
    {
        cout<<"Not Found";
    }
    
}