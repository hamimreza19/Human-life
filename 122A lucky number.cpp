#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> lucky_numbers = {4,7,44,47,74,77,444,447,474,744,747,774,777};
    for(int i=0;i<lucky_numbers.size();i++){
        if(n%lucky_numbers[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
