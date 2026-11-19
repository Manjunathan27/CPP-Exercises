#include<iostream>
using namespace std;
void addReturns(int *count, int returned);
void addReturns(int *count, int returned)
{
    *count = *count+returned;
}
int main()
{
    int count, returned;
    cout<<"Enter the count : ";
    cin>>count;
    cin>>returned;
    int *ptr = &count;
    addReturns(ptr,returned);
    cout<<*ptr;
}