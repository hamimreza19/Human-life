#include<iostream>
using namespace std;

struct Person
{
    int age;
    float salary;
};
int main()
{
  struct Person person1 = (27,3150.46);
  struct Person person2,person3;

  person2.age = 23;
  person2.salary = 4123.468;
  person3 = person2;

  cout<<"person1 : \n";
  cout<"Age = "<<person1.age<<endl;
  cout<<"Salary = "<<person1.salary<<endl;

  cout<<"\nperson2 : \n";
  cout<"Age = "<<person2.age<<endl;
  cout<<"Salary = "<<person2.salary<<endl;

  cout<<"\nperson3 : \n";
  cout<"Age = "<<person3.age<<endl;
  cout<<"Salary = "<<person3.salary<<endl;




}
