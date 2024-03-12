#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if(marks>100)
    {
        cout<<"Invalid Marks";
    }

    else if(marks<0)
    {
        cout<<"Invalid Marks";
    }

    else if(marks>=80)
    {
        cout<<"A+";
    }

    else if(marks>=70)
    {
        cout<<"A";
    }

    else if(marks>=60)
    {
        cout<<"A-";
    }

    else if(marks>=50)
    {
        cout<<"B";
    }

    else if(marks>=40)
    {
        cout<<"C";
    }

    else if(marks>=33)
    {
        cout<<"D";
    }

    else
    {
        cout<<"Fail"<<endl;
        cout<<"Failure is the piller of success";

    }


}
