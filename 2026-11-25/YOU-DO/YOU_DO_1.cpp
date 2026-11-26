#include<iostream>
using namespace std;
class Person
{
    private:
    string name;

    public:
    Person(string name1)
    {
        name=name1;
    }
    string getname()
    {
        return name;
    }
};
class Participant : public Person
{
    public:
    int registrationNumber;

    Participant(string name1, int registrationNumber1): Person(name1)
    {
        registrationNumber=registrationNumber1;
    }
    void getter()
    {
        cout<<getname()<<"| "<<"Registration "<<registrationNumber;
    }

};
int main()
{
    string name;
    int registrationNumber;
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the registration number: ";
    cin>>registrationNumber;
    Participant pt(name,registrationNumber);
    pt.getter();

}