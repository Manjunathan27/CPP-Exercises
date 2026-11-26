#include<iostream>
using namespace std;
class person
{
    private :
    string name;

    public:
    void psetter(string name1)
    {
        name=name1;

    }
    void pgetter()
    {
        cout<<name;
    }
};
class instructor : public person
{
    public:
    string subject;
     void getter()
    {
        cout<<" teaches "<<subject;
    }
    void setter(string subject1)
    {
        subject= subject1;
    }
};
int main()
{

    instructor inst;
    string name, subject;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the subject: ";
    cin>>subject;
    inst.psetter(name);
    inst.setter(subject);
    inst.pgetter();
    inst.getter();


}