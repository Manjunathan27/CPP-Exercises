#include<iostream>
using namespace std;
int main()
{
    int apples,sold;
    cout<<"Enter the Apples Count : ";
    cin>>apples;
    cout<<"Enter the Sold Count : ";
    cin>>sold;
    cout<<"Apples Left : "<<apples-sold;
    return 0;
}