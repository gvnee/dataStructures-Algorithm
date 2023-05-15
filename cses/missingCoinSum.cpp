#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100;

void f(){
  int n; cin>>n;
  int a[n+1];
  for(int i = 1;i<=n;i++) cin>>a[i];
  sort(a, a+n);
  int dp[mxn];
  dp[0] = 1;
  for(int i = 1;i<=n;i++){
    if(dp[i-1] < a[i]){
      cout<<dp[i-1]<<"\n";
      return;
    }
    dp[i] = dp[i-1] + a[i];
  }
  cout<<dp[n]<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("input.in", "r", stdin);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}