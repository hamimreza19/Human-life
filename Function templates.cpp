#include<iostream>
using namespace std;

template<class Addition>
Addition add(Addition a, Addition b)
{
    return a+b;
}
template<class Subtraction>
Subtraction sub(Subtraction a, Subtraction b)
{
    return a-b;
}
int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(11.4,20.3)<<endl;
    cout<<sub(13.7,5.0)<<endl;

}
