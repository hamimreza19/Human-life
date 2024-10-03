#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<*x<<" "<<*y<<endl;

}
int main()
{
   int a =5, b = 8;
   cout<<a<<" "<<b<<endl;

   swap(&a, &b);
   cout<<a<<" "<<b<<endl;

}
