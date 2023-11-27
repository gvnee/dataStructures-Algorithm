#include<bits/stdc++.h>
using namespace std;

void f(){
  int n; cin>>n;
  int a[n+1] = {};
  for(int i = 1;i<=n;i++) cin>>a[i];
  int dp[n] = {}, p[n] = {};
  dp[1] = a[1]; p[1] = 0;
  dp[2] = a[2]; p[2] = 0;
  for(int i = 3;i<=n;i++){
    dp[i] = a[i];
    if(dp[i-1] < dp[i-2]){
      dp[i] += dp[i-1];
      p[i] = i-1;
    }
    else{
      dp[i] += dp[i-2];
      p[i] = i-2;
    }
  }
  cout<<dp[n]<<"\n";
  int t = n;
  vector<int> r; r.push_back(n);
  while(t != p[t]){
    t = p[t];
    r.push_back(t);
  }
  reverse(r.begin(), r.end());
  for(int x:r) if(x != 0) cout<<x<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}