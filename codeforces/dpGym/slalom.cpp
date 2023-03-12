#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void f(){
  ll n;
  cin>>n;
  // int dp[n][n];
  vector<vector<ll>> dp(n);
  for(ll i = 0;i<n;i++){
    for(ll j = 0;j<=i;j++){
      cin>>temp;
      dp[i].push_back(temp);
    }
  }
  for(ll i = 0;i<n;i++){
    for(ll j = 0;j<=i;j++){

      ll l = 0, r = 0;
      if(i == 0) continue;

      if(j == 0) l = dp[i-1][j];
      else if(j == i) l = dp[i-1][j-1];
      else{
        l = dp[i-1][j-1];
        r = dp[i-1][j];
      }
      dp[i][j] = max(dp[i][j] + l, dp[i][j]+r);
    }
  }
  // for(ll i = 0;i<n;i++){
  //   for(ll j = 0;j<=i;j++){
  //     cout<<dp[i][j]<<" ";
  //   }
  //   cout<<"\n";
  // }
  ll ma = dp[n-1][0];
  for(ll i = 0;i<n;i++){
    ma = max(ma, dp[n-1][i]);
  }
  cout<<ma;
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  // freopen("slalom.in", "r", stdin);
  // freopen("slalom.out", "w", stdout);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}