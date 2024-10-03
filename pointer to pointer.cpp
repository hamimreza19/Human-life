#include<iostream>
using namespace std;
int main()
{
  int var;
  int *ptr;
  int **pptr;

  var = 2000;
  ptr = &var;
  pptr = &ptr;
  cout<<"Value of variable : "<<var<<endl;
  cout<<"Value of ptr : "<<*ptr<<endl;
  cout<<"Value of pptr : "<<**pptr<<endl;
cout<<"Value of ptr : : "<<ptr<<endl;
cout<<"Value of pptr : "<<pptr<<endl;
cout<<"Value of ptr : "<<&var<<endl;
}
