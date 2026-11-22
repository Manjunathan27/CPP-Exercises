#include<iostream>
using namespace std;
int main()
{
    int tickets[5]={10,20,30};
    int check=0;
    for(int index=4;index>=0;index--)
    {
        cout<<tickets[index]<<endl;
        
    }
    for(int nindex=0;nindex<=4;nindex++)
    {
        if(tickets[nindex]==10)
        {
            check = nindex;
        }
    }
    for(int jindex=4;jindex>=check;jindex--)
    {
        tickets[jindex]=tickets[jindex-1];
        cout<<endl;

        for(int i=0;i<=4;i++)
        {
        cout<<tickets[i]<<endl;

        }
    }
}