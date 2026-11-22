#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cin>>number;
    for(int row=1;row<=number;row++)
    {
        for (int column=1;column<=row;column++)
        {
            cout<<column<<" ";
            sum=sum+column;
        }
        cout<<endl;
    }
    cout<<"Total : "<<sum;
}