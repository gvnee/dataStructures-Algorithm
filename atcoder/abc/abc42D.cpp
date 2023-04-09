#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n, m, a, b;
  cin>>n>>m>>a>>b;
  int dp[100001][100001];

  for(int j = 0;j<=m;j++){
    dp[0][j] = 0;
  }

  for(int i = 0;i<=n;i++){
    dp[i][0] = 0;
  }


  dp[1][1] = 1;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if(n-a<i && j<=b) continue;
      dp[i][j] = (dp[i-1][j] + dp[i][j-1]);
      if(dp[i][j]>=MOD) dp[i][j] -= MOD;
    }
  }

  // for(int i = 0;i<=n;i++){
  //   for(int j = 0;j<=m;j++){
  //     cout<<dp[i][j]<<" \n"[j==m];
  //   }
  // }

  cout<<dp[n][m]<<"\n";

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