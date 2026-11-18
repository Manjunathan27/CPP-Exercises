#include<iostream>
using namespace std;
int main()
{
    int number,lastdigit,newnumber=0;
    cin>>number;
     int oG = number;
    while (number>0)
    {
       lastdigit = number%10;
       newnumber = lastdigit+(10*newnumber);
       number=number/10;

    }
    if(newnumber==oG)
    {
        cout<<"Palindrome";
    }
    else
    {
         cout<<"Not a Palindrome";
    }
    
}