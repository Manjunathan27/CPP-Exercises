#include<iostream>
using namespace std;
int main()
{
    int subject1,subject2,subject3,total=0;
    cout<<"Enter the Marks : ";
    cin>>subject1;
    cin>>subject2;
    cin>>subject3;
    total=subject1+subject2+subject3;
    cout<<"The Total Marks : "<<total<<endl;;
    cout<<"The Average is : "<<total/3;
    return 0;
}