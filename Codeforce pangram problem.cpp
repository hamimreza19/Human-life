#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>P;
    for(int i=0;i<n;i++){
        P.insert(tolower(s[i]));
    }
    if(P.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}
