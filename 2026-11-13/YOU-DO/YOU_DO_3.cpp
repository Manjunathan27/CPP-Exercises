#include<iostream>
using namespace std;
int main()
{
    int array[2][3];
    int array2[2][3];
    int total[2][3];

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
            cin>>array2[index][cindex];
        }
        
    }
    
    for (int index=0;index<2;index++)
    {
        for (int cindex=0;cindex<3;cindex++)
        {
            total[index][cindex]=array[index][cindex]+array2[index][cindex];
        } 
    }
     for (int index=0;index<2;index++)
    {
        for (int cindex=0;cindex<3;cindex++)
        {
            cout<<total[index][cindex]<<" ";
        }
        cout<<endl;
    }
    
}