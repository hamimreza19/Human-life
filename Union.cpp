#include<iostream>
using namespace std;

union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x = 15;
    cout<<"t1.x = "<<t1.x<<endl;
    cout<<"t1.y = "<<t1.y<<endl;

    t1.x = 25;
    cout<<"t1.x = "<<t1.x<<endl;
    cout<<"t1.y = "<<t1.y<<endl;
}
