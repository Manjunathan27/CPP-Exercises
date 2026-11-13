#include<iostream>
using namespace std;
int main()
{
    int chocolates;
    cout<<"Enter the Chocolates count : ";
    cin>>chocolates;
    int children;
    cout<<"Enter the Children count : ";
    cin>>children;
    cout<<"The children got the chocolate count : "<<chocolates/children<<endl;
    cout<<"The Left over chocolate : "<<chocolates%children;
    return 0;
}