#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n,x;
  cin>>n>>x;
  vector<int> coins;
  for(int i = 0;i<n;i++){
    cin>>temp;
    coins.push_back(temp);
  }
  ll dp[x+1] = {0};
  dp[0] = 0;
  for(int i = 1;i<=x;i++){
    dp[i] = INT_MAX;
    for(auto c : coins){
      if(i - c >= 0){
        dp[i] = min(dp[i-c]+1, dp[i]);
      }
    }
  }
  if(dp[x] == INT_MAX) cout<<"-1"<<"\n";
  else cout<<dp[x]<<"\n";
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