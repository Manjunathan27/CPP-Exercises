#include<iostream>
using namespace std;
int previewBalance(int balance, int cost)
{
    cout<<balance<<" ";
    return balance-cost;
}
int main()
{
    int balance,cost;
    cin>>balance>>cost;
    int Remaining = previewBalance(balance,cost);
    cout<<Remaining;
}