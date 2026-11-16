#include<iostream>
using namespace std;
float triangleArea(float base, float height)
{
    return 0.5*base*height;
}
int main()
{
    float base,height;
    cin>>base;
    cin>>height;
    float area = triangleArea(base,height);
    cout<<"Triangle Area : "<<area;
}