#include<iostream>
using namespace std;
int main()
{
   int number,oddsqauresum=0,count=0;
    cout<<"Enter the Number : ";
    cin>>number;
    for(int index=1;index<=number;index++)
    {
        if(index%2!=0)
        {
            oddsqauresum=oddsqauresum+(index*index);
        }
        else{
            count++;
        }
    }
    cout<<"Odd Sqaure Sum : "<<oddsqauresum<<endl;
    cout<<"Even Count : "<<count;
}