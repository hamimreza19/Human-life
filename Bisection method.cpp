#include<iostream>
#include<cmath>
using namespace std;

double F(double x)
{
    return(sqrt(x)-cos(x));
}

int main()
{
    double a,b,m,root;
    int i;
    cout<<("Input first initial guess a ");
    cin>>a;
    cout<<("Input second initial guess b ");
    cin>>b;

    if(F(a)==0)
    {
        root=a;
    }
    else if(F(b)==0)
    {
        root=b;
    }
    else{

        if(F(a)*F(b)>0)
        {
            cout<<("Initial guess is Wrong");
        }
        else{
           for(i=0; i<100;i++)
           {
               m=(a+b)/2;
               if(F(a)*F(m)>0)
               {
                   a=m;
               }
               else{
                b=m;
               }
           }
           root=m;



        }
    }
    cout<<root;
}
