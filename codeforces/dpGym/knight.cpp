#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int n, m;
  cin>>n>>m;
  ll dp[n][m] = {0};
  for(int i = 0;i<n;i++)
    for(int j = 0;j<m;j++)
      dp[i][j] = 0;
  dp[0][0] = 1;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(i+1<n && j+2<m){
        dp[i+1][j+2] += dp[i][j];
      }
      if(i+2<n && j+1<m){
        dp[i+2][j+1] += dp[i][j];
      }
    }
  }
  cout<<dp[n-1][m-1];
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  freopen("knight.in", "r", stdin);
  freopen("knight.out", "w", stdout);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}