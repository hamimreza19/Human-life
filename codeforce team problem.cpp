#include<iostream>
using namespace std;
int main()
{
  int n,x,y,z,count=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x>>y>>z;
    int k = x+y+z;
    if(k>=2){
        count = count+1;
    }
  }
  cout<<count;

}
