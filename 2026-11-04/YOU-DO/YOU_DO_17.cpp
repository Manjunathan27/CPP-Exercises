#include<iostream>
using namespace std;
int main()
{
    int students = 1430;
    int buscarries = 50;
    cout<<"Number of full buses : "<<students/buscarries<<endl;
    cout<<"Left over students : "<<students%buscarries;
}