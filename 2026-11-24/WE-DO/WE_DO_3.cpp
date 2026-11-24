#include<iostream>
using namespace std;
class Room
{
    private:
    int length;
    int width;

    public:
    void setDimension(int length1, int width1)
    {
        length=length1;
        width=width1;
    }
    void getArea()
    {
        cout<<"The Area is : "<<length*width;
    }

};

int main()
{
    Room room1;
    int length;
    int width;
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>width;
    room1.setDimension(length,width);
    room1.getArea();
}