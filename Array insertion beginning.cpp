#include<iostream>
using namespace std;
int main()
{
  int arr[5];
  int n;
  cout<<"Enter the number of elements of the array :  ";
  cin>>n;
  cout<<"Enter the data :  ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int val;
  cout<<"Enter the value to add at the beginning : ";
  cin>>val;
  for(int i=n;i>0;i--){
    arr[i] = arr[i-1];
  }
  arr[0] = val;
  n++;
  cout<<"Updated Array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
