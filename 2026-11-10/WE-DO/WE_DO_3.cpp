#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the count : ";
    cin>>number;
    for(int index=1;index<=number;index++)
    {
        if(index%2!=0)
        {
            cout<<index<<endl;
        }
    }
}