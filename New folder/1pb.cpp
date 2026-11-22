#include<iostream>
using namespace std;
int main()
{
    int array1[3][3];
    int array2[3][3];
    int sum[3][3];
   
     for (int rowindex=0; rowindex<3; rowindex++)
    {
        for (int columnindex=0; columnindex<3; columnindex++)
        {
            cin>>array1[rowindex][columnindex];
        }
        
    }
     for (int rowindex=0; rowindex<3; rowindex++)
    {
        for (int columnindex=0; columnindex<3; columnindex++)
        {
            cin>>array2[rowindex][columnindex];
        }
        
    }
    for (int rowindex=0; rowindex<3; rowindex++)
    {
        for (int columnindex=0; columnindex<3; columnindex++)
        {
            sum[rowindex][columnindex] = array1[rowindex][columnindex] + array2[rowindex][columnindex];
            cout<<sum[rowindex][columnindex]<<" ";
        }
        cout<<endl;
        
    }
    
}