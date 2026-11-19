#include<iostream>
using namespace std;
int main()
{
    int array[5];
    int sum=0;
    for(int index=0; index<5; index++)
    {
        cin>>array[index];
    }
    int *pointer = &array[0];


    // array+1;
    // array+2;
    
    for (int index=0;index<5;index++)
    {
        cout<< *(array + index) <<endl;
        sum=sum+*(array + index);
    }
    cout<<"sum : "<<sum;
    
}