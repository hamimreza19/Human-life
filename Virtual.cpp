#include<iostream>
using namespace std;

class A
{
public :
    void magic()
    {
        cout<<"Actually there is no magic"<<endl;
    }
    void talk()
    {
        cout<<"I can talk any time";
    }
};
class B : virtual public A{};
class C : public virtual A{};
class D : public B, public C{};

int main()
{
 D obj;
 obj.magic();
 obj.talk();

}
