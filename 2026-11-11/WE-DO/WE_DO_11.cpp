#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    for(int row=1;row<=number;row++)
    {
        for (int column=1;column<=row;column++)
        {
            cout<<column<<" ";
        }
        cout<<endl;
    }
}