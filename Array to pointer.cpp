#include<iostream>
using namespace std;
int main()
{
  int *ptr;
  int array[] = {5,7,12,-6,9,11,-78};
  ptr = &array;
  for(int i=0;i<7;i++){
    cout<<*ptr<<endl;
    ptr++;
  }

}
