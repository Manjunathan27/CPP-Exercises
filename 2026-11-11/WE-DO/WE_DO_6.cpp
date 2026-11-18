#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    do
    {
        if(number%2!=0)
        {
        cout<<number<<endl;
        }
        number++;
    }while (number<=9); 
}