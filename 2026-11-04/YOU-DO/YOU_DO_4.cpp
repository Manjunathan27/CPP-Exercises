#include<iostream>
using namespace std;
int main()
{
    int totalStudents = 85;
    int teamForm = 6;
     cout<<"Full Teams : "<<totalStudents/teamForm<<endl;
     cout<<"Left Students : "<<totalStudents%teamForm;
}