#include<iostream>
using namespace std;

class library
{
    int a,b;
public :
   void setvalue()
    {
        a=25,b=40;
    }
    friend float mean(library s );
};
float mean (library s)
{
    return float (s.a + s.b )/2.0;
}
int main()
{
 library x;
 x.setvalue();
 cout<<"Mean value = "<<mean(x)<<endl;
    return 0;

}
