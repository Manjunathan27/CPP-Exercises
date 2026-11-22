#include<iostream>
using namespace std;
int main()
{
    int delivery[6];
    for(int index=0;index<6;index++)
    {
        cin>>delivery[index];
    }
    for(int jindex=0;jindex<6;jindex++)
    {
        if(jindex==0)
        {
            cout<<"First Count : "<<delivery[jindex]<<endl;
        }
        if(jindex==5)
        {
            cout<<"Last Count : "<<delivery[jindex]<<endl;
        }
    }
    for(int kindex=5;kindex>=0;kindex--)
    {
        cout<<delivery[kindex]<<" ";
    }
}