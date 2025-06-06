#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    vector<int>gifts(101);
    for(int i=1;i<=n;i++){
        cin>>v;
        gifts[v] = i;
    }
    for(int i=1;i<=n;i++){
        cout<<gifts[i]<<" ";
    }
}
