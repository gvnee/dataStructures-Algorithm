#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;
ll N = 1000001;
ll mod = 1000000007;
void solve(){
  ll n;
  cin>>n;
  ll dp[N] = {0};
  dp[0] = 1;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=6;j++){
      if(i - j >= 0){
        dp[i] += dp[i-j];
        dp[i] %= mod;
      }
    }
  }
  cout<<dp[n]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) solve();
  
  return 0;
}