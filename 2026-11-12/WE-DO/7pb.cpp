
#include<iostream>
using namespace std;

int main()
{
    int array[5]={10,15,20,30};
    int usedsize=4;

    for(int index=0;index<usedsize;index++)
    {
        if(array[index]==15)
        {
            for(int j=index;j<usedsize-1;j++)
            {
                array[j]=array[j+1];
            }

            usedsize--;
            break;
        }
    }

    for(int index=0;index<usedsize;index++)
    {
        cout<<array[index]<<" ";
    }

    cout<<"\nUsed size = "<<usedsize;
}
