#include<iostream>
using namespace std;
int readchoice()
{

    int numberchoice;
    
    while(true)
    {
        cin>>numberchoice;
        if(numberchoice==1 || numberchoice==2)
        {
    return numberchoice;
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
    int number=readchoice();
    cout<<number;
}