#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int x, y, m;
  cin>>x>>y>>m;
  int dp[m+1] = {0};
  dp[0] = 1;
  for(int i = 1;i<=m;i++){
    if(i-x>=0)
    dp[i] += dp[i-x];
    if(i-y>=0)
    dp[i] += dp[i-y];
  }
  for(int i = m;i>=1;i--){
    if(dp[i] >= 1){
      cout<<i<<"\n";
      return;
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}