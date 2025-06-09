#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, x="hello";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++){
        if(x[j]==s[i]){
            j++;
            if(j==5){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
