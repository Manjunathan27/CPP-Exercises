#include<iostream>
using namespace std;
int countEvenTickets(int number)
{
    int count=0;
    for(int index=1;index<=number;index++)
    {
        if(index%2==0)
        {
            count=count+1;
        }
    }
    return count;
}
int main()
{
    int number;
    cin>>number;
    int countOfEven = countEvenTickets(number);
    cout<<countOfEven;
}