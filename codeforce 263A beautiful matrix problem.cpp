#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>w;
            if(w==1){
                cout<<abs(3-i) + abs(3-j)<<endl;

            }
        }
    }

}
