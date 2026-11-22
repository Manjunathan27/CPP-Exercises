#include<iostream>
using namespace std;
int main()
{
    int array[6]={101,102,103,104,105};
    int index,used=5;
    cin>>index;
    for (int cindex=index;cindex<used-1;cindex++)
    {
        array[cindex]=array[cindex+1];
    }
    for (int rindex=0;rindex<used-1;rindex++)
    {
        cout<<array[rindex]<<" ";
    }
    
    
}