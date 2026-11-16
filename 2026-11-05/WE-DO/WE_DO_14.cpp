#include<iostream>
using namespace std;
int main()
{
    int chargesfor100units = 2;
    int charges = 3;
    int consumed = 250;
    int left = consumed-100;
    cout<<"The charge is : "<<(left*charges)+(chargesfor100units*100);
}