#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll dp[n+1];
  dp[1] = 0;
  dp[2] = 1;
  for(int i = 3;i<=n;i++){
    dp[i] = dp[i-1] + dp[i-2];
  }
  cout<<dp[n];
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}