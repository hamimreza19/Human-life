#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,var,sum=0,result;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>var;
        sum+=var;
    }
    result = (sum*100)/(n*100);
    cout<<fixed<<setprecision(12)<<result<<endl;
}
