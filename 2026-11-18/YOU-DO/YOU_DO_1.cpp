#include<iostream>
using namespace std;
int main()
{
    int weight;
    cin>>weight;
    int *ppointer = &weight;
    cout<<*ppointer;
}