#include<iostream>
using namespace std;
int parcelCharge(int parcels);
int parcelCharge(int parcels)
{
    return parcels*10;
}
int parcelCharge(int parcels, int fee);
int parcelCharge(int parcels, int fee)
{
    return ((parcels*10)+fee);
}

int main()
{
    int parcels,fee;
    cin>>parcels>>fee;
    cout << parcelCharge(parcels) << " "<< parcelCharge(parcels, fee);
}