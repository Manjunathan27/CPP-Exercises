
#include<iostream>
using namespace std;

int main()
{
    int seats[2][3]={{11,12,13},{21,22,23}};
    int row,column;

    cout<<"Enter row index: ";
    cin>>row;

    cout<<"Enter column index: ";
    cin>>column;

    if(row>=0 && row<2 && column>=0 && column<3)
    {
        cout<<"Seat code = "<<seats[row][column];
    }
    else
    {
        cout<<"Invalid coordinates";
    }
}
