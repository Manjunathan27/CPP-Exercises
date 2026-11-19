#include<iostream>
using namespace std;
int main()
{
     char letter;
     cout<<"Enter the Letter : ";
     cin>>letter;
     if (letter=='A' || letter=='a' || letter=='E' || letter=='e' || letter=='I' || letter=='i' || letter=='O' || letter=='o' || letter=='U' || letter=='u')
     {
        cout<<letter<<" is a Vowel";
     }
     else
     {
      cout<<letter<<" is a Consonant";
     }
     
}