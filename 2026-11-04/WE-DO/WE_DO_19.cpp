#include<iostream>
using namespace std;
int main()
{
    int number=253,lastnumber,middlenumber,firstnumber,temp1,temp2;
    lastnumber=number%10;
    temp1=number/10;
    middlenumber=temp1%10;
    temp2=  temp1/10;
    firstnumber=temp2%10;

    cout<<"The reverse of a number is : "<<(lastnumber*100)+(middlenumber*10)+firstnumber; 


}