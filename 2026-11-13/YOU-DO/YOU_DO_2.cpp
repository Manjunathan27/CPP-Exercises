#include<iostream>
using namespace std;
int main()
{
    int array[2][3];
    for (int index=0;index<2;index++)
    {
        for (int cindex=0;cindex<3;cindex++)
        {
            cin>>array[index][cindex];
        } 
    }
       for (int index=0;index<2;index++)
    {
        for (int cindex=0;cindex<3;cindex++)
        {
            cout<<array[index][cindex]<<" ";
        } 
        cout<<endl;
    }
    
}