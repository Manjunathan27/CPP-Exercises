#include<iostream>
using namespace std;
struct Book
{
    int id;
    string bookName;
    int copy;
};

int main()
{
    Book newSet;
    cout<<"Enter the Id : ";
    cin>>newSet.id;
    cout<<"Enter the Title : ";
    cin>>newSet.bookName;
    cout<<"Number of Copies : ";
    cin>>newSet.copy;

    cout<<newSet.id<<endl;
    cout<<newSet.bookName<<endl;
    cout<<newSet.copy;
}