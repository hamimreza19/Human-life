#include<iostream>
using namespace std;

struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person1 = {21,6789.34};
    struct Person person2,person3;

    person2.age = 23;
    person2.salary = 11234.53;
    person3=person2;

    if(person2.age==person3.age && person2.salary==person3.salary)
        cout<<"Person2 equal to person23";
    else
        cout<<"Person2 not equal to person3";
}
