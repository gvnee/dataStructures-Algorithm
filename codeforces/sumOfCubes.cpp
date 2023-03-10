#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_set<ll> s;

void preCalc(){
  ll x = 1000000000000;
  for(ll i = 1;i*i*i<=x;i++){
    s.insert(i*i*i);
  }
}

void solve(){
  ll n;
  cin>>n;
  for(ll i = 1;i*i*i<=n;i++){
    if(s.count(n-i*i*i)){
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  preCalc();
  int t;
  cin>>t;
  while(t--) solve(); 
  return 0;
}