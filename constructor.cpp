#include<iostream>
using namespace std;

class Student
{
public :
    int id;
    double gpa;
    void display()
    {
        cout<< id << " " << gpa << endl;
    }
    Student(int x,double y)
    {
        id = x;
        gpa = y;
    }
};
int main()
{
    Student Hamim(1311,3.94);
    Hamim.display();

    Student Reza(1133,3.86);
    Reza.display();

}
