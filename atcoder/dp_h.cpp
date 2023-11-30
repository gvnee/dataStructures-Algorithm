#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MOD = 1e9 + 7;

void f(){
  int n, m; cin>>n>>m;
  string s[n];
  ll dp[n][m] = {};
  for(int i = 0;i<n;i++) cin>>s[i];

  dp[0][0] = 1;
  
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(s[i][j] == '#') continue;
      int u = 0, l = 0;
      if(i != 0) u = dp[i-1][j];
      if(j != 0) l = dp[i][j-1];
      dp[i][j] += u + l;
      dp[i][j] %= MOD;
    }
  }
  
  cout<<dp[n-1][m-1]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}