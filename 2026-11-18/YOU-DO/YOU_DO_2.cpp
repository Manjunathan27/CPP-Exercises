#include<iostream>
using namespace std;
int main()
{
    int initialTicket;
    int soldTicket;
    cin>>initialTicket>>soldTicket;
    int*pointer1 = &initialTicket;
    int*pointer2 = &soldTicket;
    cout<<*pointer1-*pointer2;
}