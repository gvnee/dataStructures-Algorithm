#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n, k;
  cin>>n>>k;
  
  if(n<2){
    cout<<"0\n";
    return 0;
  }

  unsigned long long dp[n+1];
  dp[2] = 1%k;
  for(long long i = 3;i<=n;i++){
    if(i%2==0) dp[i] = dp[i-1] + dp[i/2];
    else dp[i] = dp[i-1];
    if(dp[i] >= k) dp[i] -= k;
    // cout<<i<<' '<<dp[i]<<"\n";
  }
  cout<<dp[n]<<"\n";
  return 0;
}