#include<iostream>
using namespace std;
class Employee{
    protected : 
    string phoneNumber;
    public:
    Employee(string phoneNumber1)
    {
        phoneNumber=phoneNumber1;
    }
};
class Technician : public Employee
{
    
    public:
    string role;
    Technician(string phoneNumber1, string role1) : Employee(phoneNumber1)
    {
        role=role1;
    }
    void getValue()
    {
        cout<<role<<":"<<phoneNumber;
    }
};
int main()
{
    string phoneNumber;
    string role;
    cout<<"Enter the phone number: ";
    cin>>phoneNumber;
    cout<<"Enter the role: ";
    cin>>role;
    Technician tcn(phoneNumber,role);
    tcn.getValue();
}