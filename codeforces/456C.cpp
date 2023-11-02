#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100010;
ll a[mxn] = {}, dp[mxn];

void f(){
  int n;
  cin>>n;
  int t;
  for(int i = 0;i<n;i++){
    cin>>t;
    a[t]++;
  }
  dp[0] = 0;
  dp[1] = a[1] * 1;
  for(int i = 2;i<=mxn;i++){
    dp[i] = max(dp[i-2] + a[i] * i, dp[i-1]);
  }
  cout<<dp[mxn]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}