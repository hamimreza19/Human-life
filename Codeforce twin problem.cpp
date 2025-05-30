#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,coin,sum=0,sum2=0,coinCounter=0;
  cin>>n;
  vector<int>coins;
  for(int i=0;i<n;i++){
    cin>>coin;
    coins.push_back(coin);
    sum+=coin;
  }
  sum = sum/2;
  sort(coins.rbegin(),coins.rend());
  for(auto v : coins){
    sum2+=v;
    coinCounter++;
    if(sum<sum2){
        cout<<coinCounter<<endl;
        break;
    }
  }


}
