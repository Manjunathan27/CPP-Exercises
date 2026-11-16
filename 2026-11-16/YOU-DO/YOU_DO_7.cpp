#include<iostream>
using namespace std;
int readTeamSize()
{
    while (true)
    {
        int number;
        cin>>number;
        if(number>=1 && number<=6)
        {
            return number;
            break;
        }
        else
        {
            cout<<"Enter the correct number ";
            continue;
        }
         
    }
    
}
int main()
{
   int number = readTeamSize();
    cout<<number;
}