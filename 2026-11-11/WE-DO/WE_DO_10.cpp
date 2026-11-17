#include<iostream>
using namespace std;
int main()
{
    int length = 48;
    int breadth = 18;
    float area = length*breadth;

    cout<<"side of sqaure : "<<"Area of square "<<"Area%i*i"<<"Number of tiles"<<endl;
    for(int i=1;i<100;i++)
    {
        cout<<i<<"\t\t"<<i*i<<"\t\t"<<area<<"\t\t"<<int(area)%(i*i)<<"\t\t"<<area/(i*i)<<endl;
    }
}