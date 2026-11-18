#include<iostream>
using namespace std;
void printOrder(int items);
void printOrder(int items)
{
    int box=1;
    if (items>10)
    {
        box=items/10;
        cout<<box<<endl;
    }
    cout<<items;
    
}
int main()
{
    int number;
    cin>>number;
    printOrder(number);

}