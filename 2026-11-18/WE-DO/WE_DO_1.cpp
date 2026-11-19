#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter the score :";
    cin>>score;
    int *pointer = &score;
    cout<<*pointer<<"/";
    if(pointer==&score)
    {
        cout<<"Same Address";
    }
}