#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n>>m;
  ll arr[n+1];
  for(int i = 1;i<=n;i++) cin>>arr[i];
  ll dp[n+1][m+1] = {};

  if(arr[0] != 0) dp[0][arr[0]] = 1;
  else{
    for(int i = 1;i<=m;i++) dp[0][i] = 1;
  }


  for(int i = 1;i<=n;i++){
    if(arr[i] != 0){
      if(arr[i] - 1 >= 1){
        dp[i][arr[i]] = (dp[i][i] + dp[i-1][arr[i]-1])%MOD;
      }
      continue;
    }
    for(int j = 1;j<=m;j++){
      
    }
  }
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