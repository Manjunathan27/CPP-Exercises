#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    for(int index=1;index<=10;index++)
    {
        cout<<number<<" x "<<index<<" = "<<index*number<<endl;
    }

}