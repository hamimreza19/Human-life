#include<iostream>
#include<cmath>
using namespace std;

double F(double x){
    return (pow(x,3)-9*x+1);
}
int main()

{
    double a,b,m,root,h1,h2;
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
                for(int i=0; ; i++)
                {
                    h1=(fabs(F(a))*fabs(b-a))/(fabs(F(a))+fabs(F(b)));
                    a=a+h1;
                    if(fabs(h1-h2)<0.000000001)
                    {
                        break;
                    }
                    h2=h1;

                }
                root=a;

           }



        }

   cout<<root;
}

