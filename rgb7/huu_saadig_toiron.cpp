#include<bits/stdc++.h>
using namespace std;
int main(){

  int n,k;
  cin>>n>>k;
  long long dp[89];
  dp[0] = 1;
  dp[1] = 1;
  for(int i = 2;i<=n;i++){
    if(i == k) dp[i] = 0;
    else
      dp[i] = dp[i-1] + dp[i-2];
  }
  cout<<dp[n]<<"\n";
  return 0;
}