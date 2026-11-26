#include<iostream>
using namespace std;
class plot
{
    private:
    int length,width;

    public:
    void setDimensions(int length1,int width1)
    {
        length=length1;
        width=width1;
        
    }
    int getDimensions()
    {
        return 2*(length+width);
    }

};
int main()
{
    plot plot1,plot2;

    int length,width;
    cout<<"Enter the length of Plot 1 in metres: ";
    cin>>length;
    cout<<"Enter the width of Plot 1 in metres: ";
    cin>>width;
    plot1.setDimensions(length,width);
    cout<<"Enter the length of Plot 2 in metres: ";
    cin>>length;
    cout<<"Enter the width of Plot 2 in metres: ";
    cin>>width;
    plot2.setDimensions(length,width);
    cout << "Plot 1 perimeter: "
         << plot1.getDimensions() << " metres" << endl;

    cout << "Plot 2 perimeter: "
         << plot2.getDimensions() << " metres" << endl;

}