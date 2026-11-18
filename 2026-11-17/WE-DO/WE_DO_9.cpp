#include<iostream>
 using namespace std;
 void showAmount(int amount)
 {
    if (amount>0)
    {
        int amount=2;
        cout<<amount<<endl;
    }
    cout<<amount<<endl;
 }
 int main()
 {
     int count;
    cin >> count;
    showAmount(count);
    return 0;
}
