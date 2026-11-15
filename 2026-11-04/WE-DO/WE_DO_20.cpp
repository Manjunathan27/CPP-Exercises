#include<iostream>
using namespace std;
int main()
{
    int seconds=7384;
    int minutes,hours,remSeconds;
    hours=7384/3600;
    minutes=(7384%3600)/60;
    remSeconds=(7384%3600)%60;
    cout<<"Hours : "<<hours<<endl;
    cout<<"Minutes : "<<minutes<<endl;
    cout<<"Seconds : "<<remSeconds;
}