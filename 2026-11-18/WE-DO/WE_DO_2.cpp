#include<iostream>
using namespace std;
int main()
{
    int stockNumber,updatestocknumber;
    cout<<"Enter the stock count : ";
    cin>>stockNumber;
    int *pointer = &stockNumber;
    cin>>updatestocknumber;
    *pointer=updatestocknumber;
    cout<<*pointer;

}