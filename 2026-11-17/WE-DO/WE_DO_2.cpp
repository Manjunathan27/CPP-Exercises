#include<iostream>
using namespace std;
void printDemo();
void printDemo()
{
    int count=3;
    cout<<count<<endl;
}
int main()
{
    int count;
    cout<<"Enter the count : "<<endl;
    cin>>count;
    printDemo();
    cout<<count;

}