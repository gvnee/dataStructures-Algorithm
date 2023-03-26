#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;
void f(){
  ll n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  ll res = 0;
  ll dp[n];
  char c;
  ll freq[26] = {};
  for(ll i = 0;i<k;i++){
    cin>>c;
    freq[c-'a'] = 1;
  }
  dp[0] = freq[s[0] - 'a'];
  res += dp[0];
  for(ll i = 1;i<n;i++){
    if(freq[s[i] - 'a'] == 0){
      dp[i] = 0;
      continue;
    }
    dp[i] = dp[i-1]+1;
    res += dp[i];
  }

  cout<<res<<"\n";
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