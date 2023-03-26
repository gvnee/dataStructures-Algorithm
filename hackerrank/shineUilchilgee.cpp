#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

ll dp[1500001] = {};

void f(){
  ll n, m;
  cin>>n>>m;
  vector<ll> c(n);
  for(int i = 0;i<n;i++){
    cin>>c[i];
  }
  dp[0] = 1;
  for(auto x:c){
    for(int i = 1;i<=1500000;i++){
      if(i - x >= 0 && dp[i-x] == 1){
        dp[i] = dp[i-x];
      }
    }
  }
  
  ll q;
  for(int i = 0;i<m;i++){
    cin>>q;
    if(dp[q] == 1) cout<<"YES\n";
    else cout<<"NO\n";
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