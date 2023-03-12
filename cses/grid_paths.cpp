#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9)+7;
int temp;

void lmao(){
  int n;
  cin>>n;
  ll dp[n+1][n+1] = {0};
  for(int i = 0;i<=n;i++) dp[0][i] = 0;
  char c;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      cin>>c;
      if(c == '*') dp[i][j] = -1;
    }
  }
  // for(int i = 0;i<=n;i++){
  //   for(int j = 0;j<=n;j++){
  //     cout<<dp[i][j]<<" \n"[j == n];
  //   }
  // }
  ll a, b;
  if(dp[1][1] == -1){
    cout<<'0';
    return;
  }
  dp[1][1] = 1;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      if(dp[i][j] == -1) continue;
      if(dp[i-1][j] == -1) a = 0;
      else a = dp[i-1][j];
      if(dp[i][j-1] == -1) b = 0;
      else b = dp[i][j-1];
      dp[i][j] += a+b;
      dp[i][j] %= MOD;
    }
  }
  // for(int i = 1;i<=n;i++){
  //   for(int j = 1;j<=n;j++){
  //     cout<<dp[i][j]<<" \n"[j == n];
  //   }
  // }
  if(dp[n][n] == -1) cout<<'0';
  else cout<<dp[n][n]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) lmao();
  
  return 0;
}