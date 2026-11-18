#include<iostream>
using namespace std;
const int hallCapacity = 30;
int remainingSeats(int occupied)
{
    int rem=hallCapacity-occupied;
    return rem;
}
int main()
{
    int occupied;
    cin>>occupied;
    cout<<hallCapacity<<"/";
    int remaining = remainingSeats(occupied);
    cout<<remaining;
}