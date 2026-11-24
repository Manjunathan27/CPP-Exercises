#include<iostream>
using namespace std;
class Employee
{
    private:
    int employeeId;
    string employeeName;
    string department;

    public:
    void getDisplayCard()
    {
        cout<<employeeId<<endl;
        cout<<employeeName<<endl;
        cout<<department;
    }
    void setDisplayCard(int employeeId1, string employeeName1, string department1)
    {
        employeeId= employeeId1;
        employeeName=employeeName1;
        department=department1;

    }
};
int main()
{
    int employeeId;
    string employeeName;
    string department;
    cout<<"Enter the Employee Id : ";
    cin>>employeeId;
    cout<<"Enter the Employee Name : ";
    cin>>employeeName;
    cout<<"Enter the department Name : ";
    cin>>department;
    Employee employee1;

    employee1.setDisplayCard(employeeId,employeeName,department);
    employee1.getDisplayCard();

}