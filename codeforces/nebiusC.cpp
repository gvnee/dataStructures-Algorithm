#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  ll n, x, f;
  cin>>n>>x>>f;
  for(ll i = 1;i<=min(f, n*2);i++){
    ll can = i*(i+1)/2;
    if((can+x)%n==0){
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}