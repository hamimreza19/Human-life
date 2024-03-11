#include<iostream>
using namespace std;
int main()
{
   int x=-4,y;
   y=--x;
   cout<<y<<endl; //-5
   y=x++;
   cout<<y<<endl;//-5
 y=++x;
   cout<<y<<endl;//-3
   y=x++;
   cout<<y<<endl;//-3
   y=++x;
   cout<<y<<endl;//-1
 y=++x;
   cout<<y<<endl;//0
y=++x;
   cout<<y<<endl;//1
y=++x;
   cout<<y<<endl;//2
y=--x;
   cout<<y<<endl;//1
  y=++x;
   cout<<y<<endl;//2
   y=x++;
   cout<<y<<endl;//2
   y=++x;
   cout<<y<<endl;//4



}
