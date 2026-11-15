#include<iostream>
using namespace std;
int main()
{
    int length;
    string word;
    cout<<"Enter the Word : ";
    cin>>word;
    length=word.size();
    cout<<"The Length is : "<<length<<endl;
    cout<<"The 1st position is :"<<word[0]<<endl;
    cout<<"The index 2 position is : "<<word[2]<<endl;
    cout<<"The last valid index : "<<word[length-1];

}