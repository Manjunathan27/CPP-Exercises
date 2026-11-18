#include<iostream>
using namespace std;
int perimeter(int side)
{
    return side*4;
}
int perimeter(int length, int width)
{
    return 2*(length+width);
}
int main()
{
    int sideOfsqaure;
    int length, width;
    cin>>sideOfsqaure;
    cin>>length;
    cin>>width;
    int areaOfSquare = perimeter(sideOfsqaure);
    int areaOfrectangle = perimeter(length,width);
    cout<<areaOfSquare<<endl;
    cout<<areaOfrectangle;
}