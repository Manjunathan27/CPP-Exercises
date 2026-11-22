#include<iostream>
using namespace std;
int main()
{
    int number,carton=0;
    cout<<"Enter the total notebooks : ";
    cin>>number;
    while (number>0)
    {
        if (number>=4)
        {
            cout<<"Packed = 4"<<endl;
            number=number-4;
        }
        else
        {
            cout<<"Packed = "<<number<<endl;
            number=0;
        }
        carton++;
    }
    
    cout<<"Cartons = "<<carton;

}