#include<iostream>
using namespace std;
int main()
{
    int days=900;
    int year,months,remDays;
    year=900/365;
    months=(900%365)/30;
    remDays=(900%365)%30;
    cout<<"Years : "<<year<<endl;
    cout<<"Months : "<<months<<endl;
    cout<<"Days : "<<remDays;
}