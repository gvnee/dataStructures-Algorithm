#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string n, m;
  cin>>n>>m;
  ll dp[sz(n) + 1][sz(m) + 1] = {};

  for(int i = 1;i<=sz(n);i++) dp[i][0] = i;
  for(int i = 1;i<=sz(m);i++) dp[0][i] = i;
  
  for(int i = 1;i<=sz(n);i++){
    for(int j = 1;j<=sz(m);j++){
      dp[i][j] = 1e9;
      if(n[i-1] == m[j-1]) dp[i][j] = dp[i-1][j-1];
      dp[i][j] = min({dp[i][j]-1, dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
    }
  }

  cout<<dp[sz(n)][sz(m)]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}