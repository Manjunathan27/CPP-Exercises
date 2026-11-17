#include<iostream>
using namespace std;
int main()
{
    int number,lastdigit, prevdigit,count=0,product;
    cin>>number;
    while (number>9)
    {
        product=1;
        
        while (number>0)
        {
            
            lastdigit = number%10;
             product=  lastdigit*product;
            number = number/10;
           
            
        }
        number=product;
        count++;

    }
     
        cout<<"Final digit : "<<lastdigit<<endl;
        cout<<"Rounds : "<<count;

}