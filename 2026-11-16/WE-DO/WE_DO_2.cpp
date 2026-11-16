#include<iostream>
using namespace std;
void greet(string name);
int main()
{
    string name;
    getline(cin,name);
     greet(name);
}
void greet(string name)
{
    cout<<"Hello, "<<name<<" !";
}