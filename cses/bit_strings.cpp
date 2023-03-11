#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

ll mod = 1000000000+7;

void solve(){
  ll n;
  cin>>n;
  ll res = 1;
  for(int i = 0;i<n;i++){
    res *= 2;
    res = res%mod;
  }
  cout<<res;
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) solve();
  
  return 0;
}