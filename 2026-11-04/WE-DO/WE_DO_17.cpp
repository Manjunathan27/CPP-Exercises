#include<iostream>
using namespace std;
int main()
{
    int students=1250;
    int buscarry=45;
    cout<<"Full Buses : "<<students/buscarry<<endl;
    cout<<"Student Left without a seat : "<<students%buscarry;
}