#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, x;
  cin>>n>>x;
  int prices[n+1], pages[n+1];
  prices[0] = 0;
  pages[0] = 0;
  for(int i = 1;i<=n;i++) cin>>prices[i];
  for(int i = 1;i<=n;i++) cin>>pages[i];

  int dp[n+1][x+1] = {};

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=x;j++){
      dp[i][j] = dp[i-1][j];
      if(j-prices[i]>=0)
        dp[i][j] = max(dp[i][j], pages[i] + dp[i-1][j-prices[i]]);
    }
  }

  cout<<dp[n][x]<<"\n";

  // for(int i = 0;i<=n;i++)
  // for(int j = 0;j<=x;j++)
  //   cout<<dp[i][j]<<" \n"[j==x];

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