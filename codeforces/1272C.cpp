#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;
void f(){
  ll n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<ll> dp[n+1];
  for(int i = 1;i<=n;i++){
    for(int j = 0;j<=n-i+1;j++){
      dp[i].push_back(0);
    }
  }
  char temp;
  ll res = 0;
  for(int i = 0;i<k;i++){
    cin>>temp;
    for(int j = 1;j<=n;j++){
      if(dp[1][j] == 1) continue;
      dp[1][j] = temp == s[j-1];
      res += dp[1][j];
    }
  }

  // for(int i = 1;i<=n;i++){
  //   for(int j = 1;j<=n;j++){
  //     cout<<dp[i][j]<<" \n"[j==n];
  //   }
  // }
  int f;
  for(int i = 2;i<=n;i++){
    for(int j = 1;j<=n-i+1;j++){
      f = dp[i-1][j] && dp[i-1][j+1];
      if(f) res++;
      dp[i][j] = f;
    }
  }

  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}