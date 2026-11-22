#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int upindex;
    int score;
    cout<<"Enter the Marks: ";
    for(int index=0;index<5;index++)
    {
        cin>>marks[index];
    }
    cout<<"Index need to be updated : ";
    cin>>upindex;
    cout<<"Score : ";
    cin>>score;
    if(upindex<5)
    {
        for(int i=0; i<5;i++)
        {
        if(i<5)
        {
            if(i==upindex)
            {
                marks[i]=score;
            }
            cout<<marks[i]<<" ";
        }
    }
    }
    else
        {
            cout<<"Invalid Index";
        }

}