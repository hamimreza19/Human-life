#include<iostream>
using namespace std;

class Animal
{
public :
    void eat(){
    cout<<"I can eat"<<endl;
    }
    void walk(){
    cout<<"I can walk"<<endl;
    }
    void talk(){
    cout<<"I can talk"<<endl;
    }
};
class Cat : public Animal
{
public :
    void talk()
    {
        cout<<"Miaooo"<<endl;
    }

};
class Dog : public Animal
{
public :
    void talk(){
    cout<<"Gheuu Gheuu"<<endl;
    }
};
class Cow : public Animal
{
public :
    void talk(){
    cout<<"Hambaaa"<<endl;
    }
};
int main()
{
  Cow cw;
  Dog d;
  Cat c;
  cw.talk();
  d.talk();
  c.talk();
  cw.eat();
  c.eat();
  d.eat();


}
