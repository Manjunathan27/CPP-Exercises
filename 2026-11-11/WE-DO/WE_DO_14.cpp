#include<iostream>
using namespace std;
int main()
{
    int upperlimit,count=0,starting=2,sum=0;
    cin>>upperlimit;
     for(int starting=2;starting<=upperlimit;starting++)
    {
        int index;
        for (index=2;index<=starting;index++)
        {
            if (starting%index==0)
            {
                break;
            }
            }
            if (index==starting)
            {
               cout<<index<<endl;
               count=count+1;
            }
        
        
    }
    cout<<"Prime Cards : "<<count;
}