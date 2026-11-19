#include<iostream>
using namespace std;
int main()
{
    bool is_raining;
    cout<<"Enter the bool value : ";
    cin>>boolalpha >>is_raining;
    if(is_raining)
    {
        cout<<"Activity:Playvideogames";
    }
    else
    {
        cout<<"Activity:Playoutside";
    }
}