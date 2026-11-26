#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string name1)
    {
        name=name1;
    }
};
class Student : public Person
{
    public:
    int Id;
    Student(string name1, int Id1) : Person(name1)
    {
        Id=Id1;
    }
};
class ScholarshipStudent: public Student
{
    public :
    int rupee;
    ScholarshipStudent(string name1, int Id1, int rupee1) : Student(name1, Id1)
    {
        rupee=rupee1;
    }
    void getValue()
    {
        cout<<name<<"|"<<Id<<"|"<<"Award Rs "<<rupee;
    }
};
int main()
{
    string name;
    int Id;
    int rupee;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the student ID:";
    cin>>Id;
    cout<<"Enter the award in rupees:";
    cin>>rupee;

    ScholarshipStudent sst(name,Id,rupee);
    sst.getValue();
}