#include<iostream>
using namespace std;

class Engineer
{
public :
    void display()
    {
        cout<<"I am an Engineer"<<endl;
    }
};
class Doctor : public Engineer
{
public :
    void display()
    {
        cout<<"I am a Doctor"<<endl;
    }
};
class Teacher : public Engineer
{
public :
    void display()
    {
        cout<<"I am a Teacher"<<endl;
    }
};
class Scientists : public Engineer
{
public :
    void display()
    {
        cout<<"I am a Scientists";
    }
};
int main()
{
  Engineer e;
  e.display();

  Teacher t;
  t.display();

  Doctor d;
  d.display();

  Scientists s;
  s.display();

return 0;
}
