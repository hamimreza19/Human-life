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
    n--;
    for(int i=0;i<n;i++){
        arr[i] = arr[i+1];
    }
    cout<<"\nArray after deletion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
