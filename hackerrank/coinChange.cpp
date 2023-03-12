#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

const int MOD = int(1e9)+7;
int temp;

void solve(){
  int n, cc;
  cin>>n>>cc;
  vector<int> coins;
  for(int i = 0;i<cc;i++){
    cin>>temp;
    coins.pb(temp);
  }
  
  ll dp[n+1] = {0};
  dp[0] = 1;

  for(auto c : coins)
    for(int i = 1;i<=n;i++)
      if(i - c >= 0)
        dp[i] += dp[i-c];

  cout<<dp[n];
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) solve();
  
  return 0;
}
