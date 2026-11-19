#include<iostream>
using namespace std;
int main()
{
    int counter1, counter2;
  //  int *p, *q;
    cout<<"Enter the counter values : ";
    cin>>counter1>>counter2;
   int  *p = &counter1;
   int *q = p;
 //  cout<<endl<<"address : "<<q<<"  "<<p<<endl;
   *p=(*q)+1;
   cout<<*p<<endl;
   q=&counter2;
   cout<<*q;



}