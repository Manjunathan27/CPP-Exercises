#include<iostream>
using namespace std;
void printBadges(int badge)
{
    if(badge==0)
    {
        return;
    }
    printBadges(badge-1);
    cout<<badge<<" ";
    
    
}
int main()
{
    int badge;
    cin>>badge;
    printBadges(badge);
}