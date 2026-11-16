#include<iostream>
using namespace std;
double areaOfTriangle(double base, double height)
{
    return 0.5*base*height;
}
int main()
{
    double base,height;
    cin>>base;
    cin>>height;
    double area=areaOfTriangle(base,height);
    cout<<area;
}