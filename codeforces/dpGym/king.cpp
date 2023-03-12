#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;
const int SZ = 8;
void f(){
  ll dp[SZ][SZ];
  for(int i = 0;i<SZ;i++){
    for(int j = 0;j<SZ;j++){
      cin>>dp[i][j];
    }
  }
  for(int i = SZ-1;i>=0;i--){
    for(int j = 0;j<SZ;j++){
      int a = INT_MAX, b = INT_MAX, c = INT_MAX;
      if(i+1 < SZ) a = dp[i+1][j];
      if(j-1>=0) b = dp[i][j-1];
      if(i+1<SZ && j-1>=0) c = dp[i+1][j-1];
      if(i == SZ-1 && j == 0) continue;
      dp[i][j] += min(min(a, b), c);
    }
  }
  cout<<dp[0][SZ-1]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  freopen("king2.in", "r", stdin);
  freopen("king2.out", "w", stdout);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}