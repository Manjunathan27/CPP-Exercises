#include<iostream>
using namespace std;
int main()
{
    int length, width;
    cout<<"Length of the rectangle : ";
    cin>>length;
    cout<<"Width of the rectangle : ";
    cin>>width;
    cout<<"The area of the rectangle : "<<length*width<<endl;
    cout<<"The perimeter of the rectangle : "<<2*(length+width);
}