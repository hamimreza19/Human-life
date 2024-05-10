#include<iostream>
using namespace std;

class Student
{
public :
    int id;
    double gpa;
    void display()
    {
        cout<< id << "   " << gpa << endl;

    }
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};
int main()
{
    Student Hamim,Reza;
    Hamim.setValue(1311,3.94);
    Hamim.display();

    Reza.setValue(23032,4.00);
    Reza.display();

}
