#include<iostream>
using namespace std;
class asset{
    protected:
    int ID;
};
class cylinder : public asset
{
    private :
    int capacity;

    public:
    void setTheValues(int ID1, int capacity1)
    {
        ID=ID1;
        capacity=capacity1;
    }
    void getTheValues()
    {
        cout<<"Asset "<<ID<<" | ";
        cout<<"Capacity "<<capacity<<" L ";
    }
};
int main()
{
    cylinder cyl;
    int assetID, capacity;
    cout<<"Enter the asset ID: ";
    cin>>assetID;
    cout<<"Enter the capacity in litres: ";
    cin>>capacity;
    cyl.setTheValues(assetID,capacity);
    cyl.getTheValues();

}