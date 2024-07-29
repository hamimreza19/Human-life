#include<iostream>
using namespace std;

class MobileUser
{
public :
    void call()
    {
        cout<<"Hello"<<endl;
    }
    virtual void sendMessage () = 0;
};
class Hamim : public MobileUser
{
public :
    void sendMessage()
    {
        cout<<"This is Hamim Reza"<<endl;
    }
};
class Reza : public MobileUser
{
public :
    void sendMessage()
    {
        cout<<"Acknowledge me as your tribal chief"<<endl;
    }
};
int main()
{
    MobileUser *m;
    Hamim h;
    Reza r;
    m = &h;
    m->sendMessage();
    m = &r;
    m->sendMessage();

}
