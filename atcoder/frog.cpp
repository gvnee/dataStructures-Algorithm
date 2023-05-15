#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
    // cout<<a[i]<<' ';
  }
  // cout<<"\n";
  ll dp[n] = {};
  dp[0] = 0;
  dp[1] = abs(a[0] - a[1]);
  for(ll i = 2;i<n;i++){
    dp[i] = min(abs(a[i] - a[i-1]) + dp[i-1], abs(a[i] - a[i-2]) + dp[i-2]);
    // cout<<dp[i]<<"\n";
  }
  cout<<dp[n-1]<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}