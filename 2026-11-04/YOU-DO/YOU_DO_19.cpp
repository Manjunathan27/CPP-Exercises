#include<iostream>
using namespace std;
int main()
{
    int token = 407;
    int last= token%10;
    int temp = token/10;
    int middle = temp%10;
    int temp1 = temp/10;
    int first = temp1%10;
    cout<<(last*100)+(middle*10)+(first);
}