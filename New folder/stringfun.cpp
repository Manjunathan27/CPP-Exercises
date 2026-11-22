#include<iostream>
using namespace std;
int main()
{
    string sample = "Hello this a test";
    cout<<"The string is : "<<sample<<endl;
    cout<<"The Length of the String is : "<<sample.length()<<endl;
    cout<<"The First Character of the string is : "<<sample.front()<<endl;
    cout<<"The Last Character of the string is : "<<sample.back()<<endl;
    cout<<"The Existence of the string is : "<<sample.find("is")<<endl;
    cout<<"The substring of the string is : "<<sample.substr(5,10);
    return 0;

}