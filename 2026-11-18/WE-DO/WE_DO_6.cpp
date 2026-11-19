#include<iostream>
using namespace std;
void addBonus(int *score);
void addBonus(int *score)
{
    *score= *score+5;
}
int main()
{
    int score;
    cin>>score;
    addBonus(&score);
    cout<<score;
}