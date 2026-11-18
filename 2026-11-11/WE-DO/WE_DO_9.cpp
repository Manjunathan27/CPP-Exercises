#include<iostream>
using namespace std;
int main()
{
    int number,count=0;
    cin>>number;
    for(int index=1;index<=number;index++)
    {
        if ((index%3==0))
        {
            cout<<index<<endl;
            count++;
        }
    }  
    cout<<"Count = "<<count;  
}