#include<iostream>
using namespace std;
int sum(int first, int second)
{
    return first+second;
}
int main()
{
    int first,second,total;
    cin>>first;
    cin>>second;
    total =   sum(first,second);
    cout<<total;


}