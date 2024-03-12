#include<iostream>
using namespace std;
int main()
{
    float farn,cel,kel;
    cout<<"Enter celsius temperature : ";
    cin>>cel;
    farn = 1.8 * cel + 32;
    cout<<"Fahrenheit temperature is : "<<farn;

    cout<<"\n\nEnter celsius temperature : ";
    cin>>cel;
    kel = cel + 273;
    cout<<"Kelvin temperature is : "<<kel;

    cout<<"\n\nEnter fahrenheit temperature : ";
    cin>>farn;
    cel = (farn - 32)/1.8;
    cout<<"Celsius temperature is : "<<cel;


}
