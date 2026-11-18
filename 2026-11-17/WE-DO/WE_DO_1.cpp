#include<iostream>
using namespace std;
int add(int number);
int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    int preview = add(number);
    cout<<preview;

}
int add(int number)
{
    return number+5;
}