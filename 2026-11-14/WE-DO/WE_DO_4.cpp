#include<iostream>
using namespace std;
int main()
{
    string name;
    int count=0;
    getline(cin,name);
    for (int index=0;index<name.length();index++)
    {
        if (name[index]== ' ')
        {
            count++;
        }
        
    }
     cout << "Number of spaces: " << count;

    return 0;
    
}