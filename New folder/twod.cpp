#include<iostream>
using namespace std;
int main()
{
    int array[3][3];
    int counter=1;
    for (int rowindex=0; rowindex<3; rowindex++)
    {
        for (int columnindex=0; columnindex<3; columnindex++)
        {
            array[rowindex][columnindex]=counter;
            counter++;
        }
        
    }
    for (int rowindex=0; rowindex<3; rowindex++)
    {
        for (int columnindex=0; columnindex<3; columnindex++)
        {
            cout<<array[rowindex][columnindex]<<"\t";
        }
        cout<<endl;
        
    }
    
}