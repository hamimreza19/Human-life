#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int lucky_count = 0;
    cin>>n;
    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            lucky_count++;
        }
         n = n/10;
    }
    if(lucky_count==4 || lucky_count==7){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
