#include<iostream>
using namespace std;
class Person
{
    public :
   virtual void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class Student : public Person
{
public :
    void display()
    {
        cout<<"I am a Student"<<endl;
    }
};
class Teacher : public Person
{
public :
    void display()
    {
        cout<<"I am a Teacher"<<endl;
    }
};
int main()
{
 Teacher t;
 Student s;
 Person *p;
 p = &t;
 p->display();
 p = &s;
 p->display();


}
