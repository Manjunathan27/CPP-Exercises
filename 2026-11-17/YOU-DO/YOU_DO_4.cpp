#include<iostream>
using namespace std;
int area(int side)
{
    return side*side;
}
int area(int length, int width)
{
    return (length*width);
}
int main()
{
    int sideOfsqaure;
    int length, width;
    cin>>sideOfsqaure;
    cin>>length;
    cin>>width;
    int areaOfSquare = area(sideOfsqaure);
    int areaOfrectangle = area(length,width);
    cout<<areaOfSquare<<endl;
    cout<<areaOfrectangle;
}