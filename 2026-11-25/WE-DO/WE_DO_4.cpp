#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;

    public:
    Person(string name1)
    {
        name=name1;
    }
};
class Student : public Person
{
    protected:
    int id;

    public:
    Student(string name1,int id1): Person(name1)
    {
        id=id1;
    }

};
class AssessmentReport : public Student
{
    protected:
    int theoryMarks,labMarks;

    public:
    AssessmentReport(string name1,int id1,int theoryMarks1,int labMarks1) : Student(name1,id1)
    {
        theoryMarks= theoryMarks1;
        labMarks= labMarks1;
    }

    void getValues()
    {
        cout<<name<<"|"<<id<<"|"<<"Total "<<theoryMarks+labMarks;
    }

};
int main()
{
    string name;
    int roll,Tmarks,Lmarks;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the roll: ";
    cin>>roll;
    cout<<"Enter the theory marks: ";
    cin>>Tmarks;
    cout<<"Enter the lab marks: ";
    cin>>Lmarks;
    AssessmentReport asn(name,roll,Tmarks,Lmarks);
    asn.getValues();

}