#include<iostream>
using namespace std;
int main()
{
    int rupee=3670;
    int note1,temp,temp1,temp2;
    int note2;
    int note3;
    int note4;
    note1=rupee/500;
    cout<<"500 : "<<note1<<endl;
    temp=rupee%500;
    note2=temp/100;
    cout<<"100 : "<<note2<<endl;
    temp1=temp%100;
    note3=temp1/50;
    cout<<"50 : "<<note3<<endl;
    temp2=temp1%50;
    note4=temp2/10;
    cout<<"10 : "<<note4<<endl;

}