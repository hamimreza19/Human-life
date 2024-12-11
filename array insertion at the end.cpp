#include<iostream>
using namespace std;
int main()
{
    int arr[5],n;
    cout<<"Enter the elements in the array : ";
    cin>>n;
    cout<<"Enter the data : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cout<<"Enter the value insert at the end : ";
    cin>>val;
    arr[n] = val;
    n++;
    cout<<"Updated Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
