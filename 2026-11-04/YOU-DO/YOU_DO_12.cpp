#include<iostream>
using namespace std;
int main()
{
    int penscount = 500;
    int boxcount= 12;
    cout<<"The Boxes Count : "<<penscount/boxcount<<endl;
    cout<<"The Leftover pens : "<<penscount%boxcount;
}