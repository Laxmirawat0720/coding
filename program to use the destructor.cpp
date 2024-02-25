#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    Student(int x)
    {
        rollno=x;
        name="shiva";
    }
    Student(int x, string str)
    {
        rollno=x;
        name=str;
    }
    void display()
    {
        cout<<"\nx="<< rollno<<"\tname="<<name;
    }
    ~Student()
    {
        cout<<"\nDestructor called";
    }
};
int main()
{
    Student A(11);
    A.display();
    Student B(12,"dev");
    B.display();
}

