#include<iostream>
using namespace std;
int previewTicketPrice(int price)
{
    return price+20;
}
int main()
{
    int price;
    cin>>price;
    cout<<price<<" ";
    int originalPrice = previewTicketPrice(price);
    cout<<originalPrice;
}