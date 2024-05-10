#include<iostream>
using namespace std;
int main()
{
    int num[] = {20,21,-43,6,76,12,54};
    int value,pos = -1,i;
    cout<<"Enter the number you want to search : ";
    cin>>value;
    for(i=0;i<7;i++){
        if(value==num[i]){
            pos = i+1;
            break;
        }
    }
    if(pos==-1)
        cout<<"Item is not found";
    else
        cout<<"Item is found at position : "<<pos;
}
