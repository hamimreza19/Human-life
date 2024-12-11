#include<iostream>
using namespace std;
int main()
{
  int arr[5],n;
  cout<<"Enter the number of elements : ";
  cin>>n;
  cout<<"Enter the data : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int val;
  cout<<"Enter the value you want to delete : ";
  cin>>val;
  for(int i=0;i<n;i++){
    if(arr[i]==val){
        n--;
        for(int j=i;j<n;j++){
            arr[j] = arr[j+1];
            break;
        }
    }

  }
  cout<<"\nArray after deletion : \n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
