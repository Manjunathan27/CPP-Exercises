#include<iostream>
#include<iomanip>
using namespace std;

struct parcel
{
    int trackingNumber;
    string city;
    float weight;

    void printLabel()
{
    cout<<"parcel "<<trackingNumber<<" | "<<city<<" | "<<fixed<<setprecision(2)<< weight << " kg" << endl;;
}
};




int main()
{
    parcel p1,p2;

    cout << "Enter the tracking number for Parcel 1: ";
    cin >> p1.trackingNumber;
    cout << "Enter the destination city for Parcel 1: ";
    cin >> p1.city;
    cout << "Enter the weight in kg for Parcel 1: ";
    cin >> p1.weight;
    cout << "Enter the tracking number for Parcel 2: ";
    cin >> p2.trackingNumber;
    cout << "Enter the destination city for Parcel 2: ";
    cin >> p2.city;
    cout << "Enter the weight in kg for Parcel 2: ";
    cin >> p2.weight;
    p1.printLabel();
    p2.printLabel();
}