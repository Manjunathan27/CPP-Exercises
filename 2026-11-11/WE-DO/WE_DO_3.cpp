#include<iostream>
using namespace std;
int main()
{
    int row,column,count=0,maximum=0;
    cin>>row>>column;
    for(int index=1;index<=row;index++)
    {
        for(int newindex=1;newindex<=column;newindex++)
        {
            count=count+(index*newindex);
            cout<<index*newindex<<" ";
            if(maximum<(index*newindex))
            {
                maximum=index*newindex;
            }
        }
        cout<<endl;
    }
    cout<<endl<<"Sum = "<<count<<endl;
    cout<<endl<<"Maximum = "<<maximum<<endl;
}