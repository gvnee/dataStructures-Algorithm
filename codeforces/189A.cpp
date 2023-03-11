// Cut ribbon
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n, a, b, c;
  int temp;

  cin>>n;
  set<int> pieces;

  for(int i = 0;i<3;i++){
    cin>>temp;
    pieces.insert(temp);
  }

  int dp[n+1];
  memset(dp, -100, sizeof dp);
  dp[0] = 0;

  for(int i = 1;i<=n;i++){
    for(auto p:pieces){
      if(i-p >= 0){
        dp[i] = max(dp[i-p]+1, dp[i]);
      }
    }
  }

  cout<<dp[n]<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>n;
  while(t--) solve();
  
  return 0;
}