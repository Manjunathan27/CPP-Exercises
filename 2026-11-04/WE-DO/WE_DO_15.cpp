#include<iostream>
using namespace std;
int main()
{
    int litres=15;
    int minutes=8;
    int leaked=20;
    cout<<"The Remaining Litres : "<<(litres*minutes)-leaked;
}