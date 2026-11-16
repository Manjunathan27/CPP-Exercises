#include<iostream>
using namespace std;
int greatestScore(int score1,int score2,int score3)
{
    if(score1>score2)
    {
        if(score1>score3)
        {
            return score1;
        }
        else
        {
            return score3;
        }
    }
    else
    {
        return score2;
    }
}

int main()
{
    int score1,score2,score3;
    cin>>score1;
    cin>>score2;
    cin>>score3;
    int Final=greatestScore(score1,score2,score3);
    cout<<Final;

}