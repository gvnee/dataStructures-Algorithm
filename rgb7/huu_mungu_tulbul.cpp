#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long dp[41];
  for(int i = 1;i<=n;i++){
    cin>>dp[i];
  }
  for(int i = 3;i<=n;i++){
    dp[i] += min(dp[i-1], dp[i-2]);
  }
  
  cout<<dp[n]<<"\n";

  return 0;
}