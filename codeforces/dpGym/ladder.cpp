#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int n;
  cin>>n;
  int dp[n+1];
  dp[0] = 0;
  for(int i = 1;i<=n;i++){
    cin>>dp[i];
  }
  for(int i = 2;i<=n;i++){
    dp[i] += max(dp[i-1], dp[i-2]);
  }
  cout<<dp[n];
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  freopen("ladder.in", "r", stdin);
  freopen("ladder.out", "w", stdout);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}