#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    cout<<"Enter the Marks: ";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    int submission1, submission2;
    cout<<"Enter the Submission Position"<<endl;
    cout<<"Enter the Submission1 : ";
    cin>>submission1;
    cout<<"Enter the Submission2 : ";
    cin>>submission2;

    cout<<"The Marks are "<<marks[submission1]<<" "<<marks[submission2];
}