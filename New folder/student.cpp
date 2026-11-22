#include<iostream>
using namespace std;
struct Student
{
    int rollno;
    string name;
    int englishmark;
    int mathsmark;
    int total;
    float average;
};

int main()
{
    int firstNumber;
    Student naveen;
    Student nskstudents[14];

    // naveen.rollno=25l;
    // naveen.name="Naveen";
    // cout<<"Roll Number of First student is : "<<naveen.rollno<<endl;
    // cout<<"Name of First student is : "<<naveen.name;

    for(int index=0;index<3;index++)
    {
        cout<<"Enter the "<<index+1 << " student details : ";
        cout<<"Enter the Name : ";
        cin>>nskstudents[index].name;
        cout<<"Enter the rollNo : ";
        cin>>nskstudents[index].rollno;
        cout<<"Enter the Mathsmark : ";
        cin>>nskstudents[index].mathsmark;
        cout<<"Enter the Englishmark : ";
        cin>>nskstudents[index].englishmark;
        cout<<"Enter the Total : ";
        cin>>nskstudents[index].total;
        cout<<"Enter the Average";
        cin>>nskstudents[index].average;
    }
    for (int index=0;index<3;index++)
    {
         cout<<"the "<<index<< " student details : "<<endl;
         cout<<"The Name is : ";
        cout<<nskstudents[index].name<<endl;
        cout<<"The RollNo is : ";
         cout<<nskstudents[index].rollno<<endl;
         cout<<"The mathsmark is : ";
         cout<<nskstudents[index].mathsmark<<endl;
         cout<<"The englishmark is : ";
         cout<<nskstudents[index].englishmark<<endl;
         cout<<"The total is : ";
         cout<<nskstudents[index].total<<endl;
         cout<<"The average is : ";
         cout<<nskstudents[index].average<<endl;

    }
    
}