#include<iostream>
using namespace std;
int countDigits(int ticket)
{
    int count=0;
    if(ticket==0)
        {
            return 1;
        }
    while (ticket>0)
    {
        ticket=ticket/10;
        count=count+1;

    }
    return count;

    
}
int main()
{
    int number;
    cin>>number;
    int digits = countDigits(number);
    cout<<digits;

}