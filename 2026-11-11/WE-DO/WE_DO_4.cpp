#include<iostream>
using namespace std;
int main()
{
    int population;
    int target,hours=0;
    cin>>population>>target;
    while ((target>=population))
    {
        population=population*2;
        hours++;
    }
    cout<<"Hours = "<<hours<<endl;
    cout<<"Cells = "<<population;
}