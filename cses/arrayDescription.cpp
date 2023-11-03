#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int M = 1e9+7;
const int mxn = 1e5+5, mxm = 1e2+5;
ll dp[mxn][mxm] = {};

void f(){
  int n, m;
  cin>>n>>m;
  int a[n];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }

  if(a[1] == 0){
    for(int j = 1;j<=m;j++) dp[1][j] = 1;
  }
  else dp[1][a[1]] = 1;

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
        dp[i][j] += dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
        dp[i][j] %= M;
    }
    if(a[i])
      for(int j = 1;j<=m;j++)
        if(j!=a[i]) dp[i][j] = 0;
  }

  ll res = 0;
  for(int j = 1;j<=m;j++){
    res += dp[n][j];
    res %= M;
  }

  cout<<res<<"\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}