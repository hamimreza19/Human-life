#include<iostream>
using namespace std;
int main()
{
    int arr[5],n;
    cout<<"Enter the number of element : ";
    cin>>n;
    cout<<"Enter the data : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n--;
    cout<<"\nArray after deletion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
