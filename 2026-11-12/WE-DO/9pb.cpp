#include<iostream>
using namespace std;
int main()
{
    int array[2][3]={{4,7,2},{6,1,9}};
    int sum=0;
    for (int index=0;index<2;index++)
    {
        for (int cindex=0;cindex<3;cindex++)
        {
            sum=array[index][cindex]+sum;
        }
        cout<<sum<<endl;
        sum=0;
        
    }
    
}